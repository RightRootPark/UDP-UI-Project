#include <stdio.h>
#include <string.h>
#include <winsock.h>

// ����Ÿ�� �Լ� ����
void DatagramClient(char* szServer, short nPort);

// ������ ǥ���ϱ� ���� ��ũ�� ����� ����
#define PRINTERROR(s) fprintf(stderr, "\n%: &d\n", s, WSAGetLastError())

//

int main(int argc, char* *argv)
{

	WORD wVersionRequested = MAKEWORD(1, 1); // ���� ���� 1.1�� �䱸 ���� : http://blog.naver.com/dreamset?Redirect=Log&logNo=60010620996
	WSADATA wsaData;
	int nRet;
	short nPort;

	// ȣ��Ʈ�� ��Ʈ �μ��� �˻��մϴ�.

	if (argc != 3)
	{
		fprintf(stderr, "\n���� : udp_client [�����ּ�] [��Ʈ��ȣ]\n");
		return 1;
	}

	nPort = atoi(argv[2]);

	// ���Ӱ� ������ �˻��մϴ�.

	nRet = WSAStartup(wVersionRequested, &wsaData);
	if (wsaData.wVersion != wVersionRequested)
	{
		fprintf(stderr, "\n Ʋ�� ���� �����Դϴ�\n");
		return 1;

	}

	// �����ͱ׷� Ŭ���̾�Ʈ�� �ؾ� �� ���� ���� �����մϴ�.

	DatagramClient(argv[1], nPort);

	// ������ Ǳ�ϴ�.
	WSACleanup();

	return 0;
}

void DatagramClient(char* szServer, short nPort)
{
	printf("\n�����ͱ׷� Ŭ���̾�Ʈ�� ���� ���� ���Դϴ�. ���� : %s ��Ʈ : %d", szServer, nPort);

	// ������ ã���ϴ�.

	LPHOSTENT lpHostEntry;

	lpHostEntry = gethostbyname(szServer);

	if (lpHostEntry == NULL)
	{
		PRINTERROR("gethostbyname()");
		return;

	}

	// UDP/IP �����ͱ׷� ������ �����մϴ�.

	SOCKET theSocket;

	// socket(�ּҰ迭, ��������, ��������)
	theSocket = socket(AF_INET, SOCK_DGRAM, IPPROTO_UDP);

	if (theSocket == INVALID_SOCKET)
	{
		PRINTERROR("socket()");
		return;

	}

	// �������� ���� �ּ� ����ü�� ä��ϴ�.
	SOCKADDR_IN saServer;

	saServer.sin_family = AF_INET;
	saServer.sin_addr = *((LPIN_ADDR)*lpHostEntry->h_addr_list); // ���� �ּ�
	saServer.sin_port = htons(nPort); // ����ٿ��� ��Ʈ ��ȣ�� ���� ���Դϴ�.

									  // ������ �ڷḦ �����մϴ�.

	char szBuf[256];
	int nRet;

	strcpy(szBuf, "Ŭ���̾�Ʈ���� �����ϴ�. �߰���?");

	//     sendto(����,�ڷ����,�ڷ��� ����, �÷��� - ���°�, �����ּ�, �ּ��� ����
	nRet = sendto(theSocket, szBuf, strlen(szBuf), 0, (LPSOCKADDR)&saServer, sizeof(struct sockaddr));

	if (nRet == SOCKET_ERROR)
	{
		PRINTERROR("sendto()");
		closesocket(theSocket);
		return;

	}

	// ������ ��ٸ��ϴ�.

	memset(szBuf, 0, sizeof(szBuf));
	int nFromLen;

	nFromLen = sizeof(struct sockaddr);

	// recvfrom(����, �޴¹���, ������ ����, �÷��� - ���°�, �۽����� �ּҸ� ���� ����, �ּҹ����� ����
	recvfrom(theSocket, szBuf, sizeof(szBuf), 0, (LPSOCKADDR)&saServer, &nFromLen);

	if (nRet == SOCKET_ERROR)
	{
		PRINTERROR("recvfrom()");
		closesocket(theSocket);
		return;

	}

	// ���� ���� ǥ�� �մϴ�
	printf("\nData received, ���� �޾ҽ��ϴ� : %s", szBuf);

	closesocket(theSocket);
	return;

}

//��ó: http://laguna.tistory.com/2656959 [Laguna of Cakel]