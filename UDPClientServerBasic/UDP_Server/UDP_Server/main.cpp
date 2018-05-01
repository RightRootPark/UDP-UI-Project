/**********************************************************************
	Name		: Example UDP Server
	Author		: Sloan Kelly
	Date		: 2017-12-16
	Purpose		: Example of a bare bones UDP server
	Produce     : JeongGeun Park

***********************************************************************/

#define _CRT_SECURE_NO_WARNINGS    // strtok ���� ���� ���� ������ ���� ����
#include <iostream>
#include <WS2tcpip.h>
#include <stdio.h>
#include <string.h>    // strtok �Լ��� ����� ��� ����
#include <ctype.h>
#include <cstdlib>

// Include the Winsock library (lib) file Winsock ���̺귯�� (lib) ���� ����
#pragma comment (lib, "ws2_32.lib")

// Saves us from typing std::cout << etc. etc. etc. �츮�� std :: cout << ��� ���� �Է����� ���ϰ��մϴ�.
using namespace std; 
// Main entry point into the server ������ ���� ���� ��Ʈ�� ����Ʈ
void main()
{
	////////////////////////////////////////////////////////////
	// INITIALIZE WINSOCK WINSOCK �ʱ�ȭ
	////////////////////////////////////////////////////////////

	// Structure to store the WinSock version. This is filled in
	// on the call to WSAStartup() WinSock ������ �����ϴ� ����. �̰��� WSAStartup ()�� ���� ȣ�⿡�� ä�����ϴ�.
	WSADATA data;

	// To start WinSock, the required version must be passed to WinSock�� �����Ϸ��� �ʿ��� ������ ���� ��ġ�� �����ؾ��մϴ�.
	// WSAStartup(). This server is going to use WinSock version WSAStartup (). �� ������ WinSock ������ ����� ���Դϴ�.
	// 2 so I create a word that will store 2 and 2 in hex i.e. 2 �׷��� 16 ���� 2�� 2�� ������ �ܾ ����ϴ�.
	// 0x0202
	WORD version = MAKEWORD(2, 2);

	// Start WinSock WinSock ����
	int wsOk = WSAStartup(version, &data);
	if (wsOk != 0)
	{
		// Not ok! Get out quickly ������! ���� ������.
		cout << "Can't start Winsock! " << wsOk;
		return;
	}

	////////////////////////////////////////////////////////////
	// SOCKET CREATION AND BINDING ���� ����� �� ���ε�
	////////////////////////////////////////////////////////////

	// Create a socket, notice that it is a user datagram socket (UDP) ������ �����Ͽ� ������ ����� ������ �׷� ���� (UDP)���� Ȯ���մϴ�.
	SOCKET in = socket(AF_INET, SOCK_DGRAM, 0);

	// Create a server hint structure for the server ������ ���� ���� ��Ʈ ���� �����
	sockaddr_in serverHint;
	serverHint.sin_addr.S_un.S_addr = ADDR_ANY; // Us any IP address available on the machine ��ǻ�Ϳ��� ����� ���ִ� ��� IP �ּ�
	serverHint.sin_family = AF_INET; // Address format is IPv4 �ּ� ������ IPv4�Դϴ�.
	serverHint.sin_port = htons(4000); // Convert from little to big endian ���� ����ȿ��� �� ���� ������ ��ȯ

	// Try and bind the socket to the IP and port IP �� ��Ʈ�� ������ �����ϰ� ���ε��Ͻʽÿ�.
	if (bind(in, (sockaddr*)&serverHint, sizeof(serverHint)) == SOCKET_ERROR)
	{
		cout << "Can't bind socket! " << WSAGetLastError() << endl;
		return;
	}

	////////////////////////////////////////////////////////////
	// MAIN LOOP SETUP AND ENTRY ���� ���� ���� �� �Է�
	////////////////////////////////////////////////////////////

	sockaddr_in client; // Use to hold the client information (port / ip address) Ŭ���̾�Ʈ ���� (��Ʈ / IP �ּ�)�� �����ϴ� �� ����մϴ�.
	int clientLength = sizeof(client); // The size of the client information Ŭ���̾�Ʈ ������ ũ��

	char buf[1024];

	// Enter a loop ���� �Է�

	while (true)
	{
		ZeroMemory(&client, clientLength); // Clear the client structure Ŭ���̾�Ʈ ���� �����
		ZeroMemory(buf, 1024); // Clear the receive buffer ���� ���� �����

		// Wait for message �޽����� ��ٸ��ϴ�
		int bytesIn = recvfrom(in, buf, 1024, 0, (sockaddr*)&client, &clientLength);
		//int *item;

		if (bytesIn == SOCKET_ERROR)
		{
			cout << "Error receiving from client " << WSAGetLastError() << endl;
			continue;
		}

		// Display message and client info �޽��� �� Ŭ���̾�Ʈ ���� ǥ��
		char clientIp[256]; // Create enough space to convert the address byte array �ּ� ����Ʈ �迭�� ��ȯ �� ����� ������ ����ϴ�.
		ZeroMemory(clientIp, 256); // to string of characters ���ڿ���

		// Convert from byte array to chars ����Ʈ �迭���� ���ڷ� ��ȯ
		inet_ntop(AF_INET, &client.sin_addr, clientIp, 256);
		
		int rbyte;
		rbyte = clientLength;
		char *item[20];
		char *ptr = strtok(buf, ","); //" "���鹮�ڸ� �������� ���ڿ��� �ڸ�, ������ ��ȯ
		short data[20];
		short sensor[20];
		signed int sbuf_cnt = 0;
		int z=0;

			//for (int n = 0; n < rbyte; n++)
			//{
		     int i = 1;
			if (buf[sbuf_cnt] == 0x24)

			{
				
				while (ptr != NULL)  //�ڸ� ���ڿ��� ������ ���������� �ݺ�
				{ 

					
					
						item[i] = ptr;
						ptr = strtok(NULL, ","); //���� ���ڿ��� �߶� �����͸� ��ȯ
					

					data[i] = atof(item[i]);
					//data[0] = atof(item[0]);
					//data[1] = atof(item[1]);
					//data[2] = atof(item[2]);
					//data[3] = atof(item[3]);
					//data[4] = atof(item[4]);
					//data[5] = atof(item[5]);
					//data[6] = atof(item[6]);
					//data[7] = atof(item[7]);
					//data[8] = atof(item[8]);
					//data[9] = atof(item[9]);

					//printf("%x\t", data[i]);
					//printf("%f\t", data[0]);
					//printf("%f\t", data[1]);
					//printf("%f\t", data[2]);
					//printf("%f\t", data[3]);
					//printf("%f\t", data[4]);
					//printf("%f\t", data[5]);
					//printf("%f\t", data[6]);
					//printf("%f\t", data[7]);
					//printf("%f\t", data[8]);
					//printf("%f\n", data[9]);
					i++;

				}	
				//printf("ending = %d", data[i-1]);
				int chacksum1=0;
					for (int o = 1; o<=i-2;o++)
					{						
						chacksum1 += data[o];
					}
					
					if (data[i - 1] == chacksum1)
					{
						for (int p = 2; p <= i - 2; p++)
						{
							sensor[p] = data[p];
							printf("%d\t", sensor[p]);

						}
						
					}
					printf("\n");

			}

				else 
				{
					sbuf_cnt = -1;
				}
		
		// Display the message / who sent it// �޽��� ǥ�ø�ɾ�>>~~>>������>>:>> ����>> ��;
		//cout << "Message recv from " << clientIp << " : " << buf << endl;
	}

	// Close socket ���� �ݱ�
	closesocket(in);

	// Shutdown winsock ���� Winsock
	WSACleanup();
}
