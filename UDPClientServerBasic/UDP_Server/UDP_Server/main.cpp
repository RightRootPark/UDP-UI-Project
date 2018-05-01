/**********************************************************************
	Name		: Example UDP Server
	Author		: Sloan Kelly
	Date		: 2017-12-16
	Purpose		: Example of a bare bones UDP server
	Produce     : JeongGeun Park

***********************************************************************/

#define _CRT_SECURE_NO_WARNINGS    // strtok 보안 경고로 인한 컴파일 에러 방지
#include <iostream>
#include <WS2tcpip.h>
#include <stdio.h>
#include <string.h>    // strtok 함수가 선언된 헤더 파일
#include <ctype.h>
#include <cstdlib>

// Include the Winsock library (lib) file Winsock 라이브러리 (lib) 파일 포함
#pragma comment (lib, "ws2_32.lib")

// Saves us from typing std::cout << etc. etc. etc. 우리가 std :: cout << 등등 등을 입력하지 못하게합니다.
using namespace std; 
// Main entry point into the server 서버에 대한 메인 엔트리 포인트
void main()
{
	////////////////////////////////////////////////////////////
	// INITIALIZE WINSOCK WINSOCK 초기화
	////////////////////////////////////////////////////////////

	// Structure to store the WinSock version. This is filled in
	// on the call to WSAStartup() WinSock 버전을 저장하는 구조. 이것은 WSAStartup ()에 대한 호출에서 채워집니다.
	WSADATA data;

	// To start WinSock, the required version must be passed to WinSock을 시작하려면 필요한 버전을 다음 위치로 전달해야합니다.
	// WSAStartup(). This server is going to use WinSock version WSAStartup (). 이 서버는 WinSock 버전을 사용할 것입니다.
	// 2 so I create a word that will store 2 and 2 in hex i.e. 2 그래서 16 진수 2와 2를 저장할 단어를 만듭니다.
	// 0x0202
	WORD version = MAKEWORD(2, 2);

	// Start WinSock WinSock 시작
	int wsOk = WSAStartup(version, &data);
	if (wsOk != 0)
	{
		// Not ok! Get out quickly 안조아! 빨리 나가라.
		cout << "Can't start Winsock! " << wsOk;
		return;
	}

	////////////////////////////////////////////////////////////
	// SOCKET CREATION AND BINDING 소켓 만들기 및 바인딩
	////////////////////////////////////////////////////////////

	// Create a socket, notice that it is a user datagram socket (UDP) 소켓을 생성하여 소켓이 사용자 데이터 그램 소켓 (UDP)인지 확인합니다.
	SOCKET in = socket(AF_INET, SOCK_DGRAM, 0);

	// Create a server hint structure for the server 서버에 대한 서버 힌트 구조 만들기
	sockaddr_in serverHint;
	serverHint.sin_addr.S_un.S_addr = ADDR_ANY; // Us any IP address available on the machine 컴퓨터에서 사용할 수있는 모든 IP 주소
	serverHint.sin_family = AF_INET; // Address format is IPv4 주소 형식은 IPv4입니다.
	serverHint.sin_port = htons(4000); // Convert from little to big endian 작은 엔디안에서 빅 엔디 언으로 변환

	// Try and bind the socket to the IP and port IP 및 포트에 소켓을 연결하고 바인딩하십시오.
	if (bind(in, (sockaddr*)&serverHint, sizeof(serverHint)) == SOCKET_ERROR)
	{
		cout << "Can't bind socket! " << WSAGetLastError() << endl;
		return;
	}

	////////////////////////////////////////////////////////////
	// MAIN LOOP SETUP AND ENTRY 메인 루프 설정 및 입력
	////////////////////////////////////////////////////////////

	sockaddr_in client; // Use to hold the client information (port / ip address) 클라이언트 정보 (포트 / IP 주소)를 보유하는 데 사용합니다.
	int clientLength = sizeof(client); // The size of the client information 클라이언트 정보의 크기

	char buf[1024];

	// Enter a loop 루프 입력

	while (true)
	{
		ZeroMemory(&client, clientLength); // Clear the client structure 클라이언트 구조 지우기
		ZeroMemory(buf, 1024); // Clear the receive buffer 수신 버퍼 지우기

		// Wait for message 메시지를 기다립니다
		int bytesIn = recvfrom(in, buf, 1024, 0, (sockaddr*)&client, &clientLength);
		//int *item;

		if (bytesIn == SOCKET_ERROR)
		{
			cout << "Error receiving from client " << WSAGetLastError() << endl;
			continue;
		}

		// Display message and client info 메시지 및 클라이언트 정보 표시
		char clientIp[256]; // Create enough space to convert the address byte array 주소 바이트 배열을 변환 할 충분한 공간을 만듭니다.
		ZeroMemory(clientIp, 256); // to string of characters 문자열에

		// Convert from byte array to chars 바이트 배열에서 문자로 변환
		inet_ntop(AF_INET, &client.sin_addr, clientIp, 256);
		
		int rbyte;
		rbyte = clientLength;
		char *item[20];
		char *ptr = strtok(buf, ","); //" "공백문자를 기준으로 문자열을 자름, 포인터 반환
		short data[20];
		short sensor[20];
		signed int sbuf_cnt = 0;
		int z=0;

			//for (int n = 0; n < rbyte; n++)
			//{
		     int i = 1;
			if (buf[sbuf_cnt] == 0x24)

			{
				
				while (ptr != NULL)  //자른 문자열이 나오지 않을때까지 반복
				{ 

					
					
						item[i] = ptr;
						ptr = strtok(NULL, ","); //다음 문자열을 잘라서 포인터를 반환
					

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
		
		// Display the message / who sent it// 메시지 표시명령어>>~~>>아이피>>:>> 내용>> 끝;
		//cout << "Message recv from " << clientIp << " : " << buf << endl;
	}

	// Close socket 소켓 닫기
	closesocket(in);

	// Shutdown winsock 종료 Winsock
	WSACleanup();
}
