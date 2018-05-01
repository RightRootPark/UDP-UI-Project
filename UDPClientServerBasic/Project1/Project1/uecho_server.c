#include <stdio.h>
#include <string.h>
#include <winsock.h>

// 프토타입 함수 선언
void DatagramClient(char* szServer, short nPort);

// 오류를 표시하기 위한 매크로 도우미 정의
#define PRINTERROR(s) fprintf(stderr, "\n%: &d\n", s, WSAGetLastError())

//

int main(int argc, char* *argv)
{

	WORD wVersionRequested = MAKEWORD(1, 1); // 윈속 버전 1.1을 요구 참고 : http://blog.naver.com/dreamset?Redirect=Log&logNo=60010620996
	WSADATA wsaData;
	int nRet;
	short nPort;

	// 호스트와 포트 인수를 검사합니다.

	if (argc != 3)
	{
		fprintf(stderr, "\n문법 : udp_client [서버주소] [포트번호]\n");
		return 1;
	}

	nPort = atoi(argv[2]);

	// 윈속과 버전을 검사합니다.

	nRet = WSAStartup(wVersionRequested, &wsaData);
	if (wsaData.wVersion != wVersionRequested)
	{
		fprintf(stderr, "\n 틀린 윈속 버전입니다\n");
		return 1;

	}

	// 데이터그램 클라이언트가 해야 할 일을 이제 시작합니다.

	DatagramClient(argv[1], nPort);

	// 윈속을 풉니다.
	WSACleanup();

	return 0;
}

void DatagramClient(char* szServer, short nPort)
{
	printf("\n데이터그램 클라이언트는 지금 전송 중입니다. 서버 : %s 포트 : %d", szServer, nPort);

	// 서버를 찾습니다.

	LPHOSTENT lpHostEntry;

	lpHostEntry = gethostbyname(szServer);

	if (lpHostEntry == NULL)
	{
		PRINTERROR("gethostbyname()");
		return;

	}

	// UDP/IP 데이터그램 소켓을 생성합니다.

	SOCKET theSocket;

	// socket(주소계열, 소켓형식, 프토토콜)
	theSocket = socket(AF_INET, SOCK_DGRAM, IPPROTO_UDP);

	if (theSocket == INVALID_SOCKET)
	{
		PRINTERROR("socket()");
		return;

	}

	// 서버에게 보낼 주소 구조체를 채웁니다.
	SOCKADDR_IN saServer;

	saServer.sin_family = AF_INET;
	saServer.sin_addr = *((LPIN_ADDR)*lpHostEntry->h_addr_list); // 서버 주소
	saServer.sin_port = htons(nPort); // 명령줄에서 포트 번호를 받은 것입니다.

									  // 서버에 자료를 전송합니다.

	char szBuf[256];
	int nRet;

	strcpy(szBuf, "클라이언트에서 보냅니다. 잘가죠?");

	//     sendto(소켓,자료버퍼,자료의 길이, 플래그 - 상태값, 서버주소, 주소의 길이
	nRet = sendto(theSocket, szBuf, strlen(szBuf), 0, (LPSOCKADDR)&saServer, sizeof(struct sockaddr));

	if (nRet == SOCKET_ERROR)
	{
		PRINTERROR("sendto()");
		closesocket(theSocket);
		return;

	}

	// 응답을 기다립니다.

	memset(szBuf, 0, sizeof(szBuf));
	int nFromLen;

	nFromLen = sizeof(struct sockaddr);

	// recvfrom(소켓, 받는버퍼, 버퍼의 길이, 플래그 - 상태값, 송신자의 주소를 받을 버퍼, 주소버퍼의 길이
	recvfrom(theSocket, szBuf, sizeof(szBuf), 0, (LPSOCKADDR)&saServer, &nFromLen);

	if (nRet == SOCKET_ERROR)
	{
		PRINTERROR("recvfrom()");
		closesocket(theSocket);
		return;

	}

	// 받은 값을 표시 합니다
	printf("\nData received, 값을 받았습니다 : %s", szBuf);

	closesocket(theSocket);
	return;

}

//출처: http://laguna.tistory.com/2656959 [Laguna of Cakel]