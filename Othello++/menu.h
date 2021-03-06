#include <iostream>
#include <Windows.h>
#include <conio.h>
#include "connection.h"

#define BLACK 1
#define WHITE 2

#define TO_EXIT				0
#define	TO_START_MENU		1
#define TO_HELP_MENU		2
#define TO_CONNECTION_MENU	3
#define TO_SERVER_MENU		4
#define TO_CLIENT_MENU		5

// 로고 출력
void PrintLogo()
{
	std::cout << "┏━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━┓\n"
		<< "┃　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　 　　　┃\n"
		<< "┃　　■■■　　■■■■■　■　　　■　■■■■■　■　　　　　■　　　　　　■■■　　　　　　　　　　　　　 ┃\n"
		<< "┃　■　　　■　　　■　　　■　　　■　■　　　　　■　　　　　■　　　　　■　　　■　　　■　　　　　■　　 ┃\n"
		<< "┃　■　　　■　　　■　　　■　　　■　■　　　　　■　　　　　■　　　　　■　　　■　　　■　　　　　■　　 ┃\n"
		<< "┃　■　　　■　　　■　　　■■■■■　■■■■■　■　　　　　■　　　　　■　　　■　■■■■■　■■■■■ ┃\n"
		<< "┃　■　　　■　　　■　　　■　　　■　■　　　　　■　　　　　■　　　　　■　　　■　　　■　　　　　■　　 ┃\n"
		<< "┃　■　　　■　　　■　　　■　　　■　■　　　　　■　　　　　■　　　　　■　　　■　　　■　　　　　■　　 ┃\n"
		<< "┃　　■■■　　　　■　　　■　　　■　■■■■■　■■■■■　■■■■■　　■■■　　　　　　　　　　　　　 ┃\n"
		<< "┃　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　 　　　┃\n"
		<< "┗━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━┛\n\n\n";
}

// 시작 메뉴 출력
void PrintStartMenu(int menu)
{
	system("cls");
	PrintLogo();

	// 메뉴 출력

	if (menu == 1)
	{
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 6);
	}

	std::cout << "　　　　　　　　　　　　　　　　　　　　　　 ┏━━━━━━━━━━━━━━━━━━━┓\n"
		<< "　　　　　　　　　　　　　　　　　　　　　　 ┃　　　　　　　　　 ┃\n"
		<< "　　　　　　　　　　　　　　　　　　　　　　 ┃　　  　시작　　　 ┃\n"
		<< "　　　　　　　　　　　　　　　　　　　　　　 ┃　　　　　　　　　 ┃\n"
		<< "　　　　　　　　　　　　　　　　　　　　　　 ┗━━━━━━━━━━━━━━━━━━━┛\n";

	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 7);

	if (menu == 2)
	{
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 6);
	}

	std::cout << "　　　　　　　　　　　　　　　　　　　　　　 ┏━━━━━━━━━━━━━━━━━━━┓\n"
		<< "　　　　　　　　　　　　　　　　　　　　　　 ┃　　　　　　　　　 ┃\n"
		<< "　　　　　　　　　　　　　　　　　　　　　　 ┃　　  　설명　　　 ┃\n"
		<< "　　　　　　　　　　　　　　　　　　　　　　 ┃　　　　　　　　　 ┃\n"
		<< "　　　　　　　　　　　　　　　　　　　　　　 ┗━━━━━━━━━━━━━━━━━━━┛\n";

	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 7);

	if (menu == 3)
	{
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 6);
	}

	std::cout << "　　　　　　　　　　　　　　　　　　　　　　 ┏━━━━━━━━━━━━━━━━━━━┓\n"
		<< "　　　　　　　　　　　　　　　　　　　　　　 ┃　　　　　　　　　 ┃\n"
		<< "　　　　　　　　　　　　　　　　　　　　　　 ┃　　  　종료　　　 ┃\n"
		<< "　　　　　　　　　　　　　　　　　　　　　　 ┃　　　　　　　　　 ┃\n"
		<< "　　　　　　　　　　　　　　　　　　　　　　 ┗━━━━━━━━━━━━━━━━━━━┛\n\n";

	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 7);
}

// 설명 출력
int HelpMenu()
{
	system("cls");
	PrintLogo();

	std::cout << "\n\n\n"
		<< " 키보드 방향키로 보드판의 커서(◆◇)를 이동시킬 수 있습니다.\n"
		<< " 엔터를 입력하면 커서가 있는 위치에 돌(●○)을 놓습니다.\n"
		<< " 돌을 놓을 수 있는 곳이 없다면 자동으로 차례가 넘어갑니다.\n"
		<< " 제한 시간은 5분이며 이를 넘기면 무조건 패배입니다.\n"
		<< " 흑이 선공, 백이 후공이며 흑백 선택은 선착순입니다.\n"
		<< " 이 외의 룰은 보드게임 오델로와 같습니다.\n\n"
		<< " 확인 <┛";

	// 엔터 입력 시 종료
	while (_getch() != 13)
	{

	}

	return TO_START_MENU;
}

// 시작 메뉴
int StartMenu()
{
	int menu = 1;
	PrintStartMenu(menu);

	while (true)
	{
		if (_kbhit())
		{
			switch (_getch())
			{
			// 위
			case 72:
				if (menu > 1)
				{
					menu--;
					PrintStartMenu(menu);
				}
				break;

			// 아래
			case 80:
				if (menu < 3)
				{
					menu++;
					PrintStartMenu(menu);
				}
				break;

			// 엔터
			case 13:
				switch (menu) {
				// 시작
				case 1:
					return TO_CONNECTION_MENU;

				// 설명
				case 2:
					return TO_HELP_MENU;
					break;

				// 종료
				case 3:
					return TO_EXIT;
				}
			}
		}
	}
}

// 시작 메뉴 출력
void PrintConnectionMenu(int menu)
{
	system("cls");
	PrintLogo();

	// 메뉴 출력

	if (menu == 1)
	{
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 6);
	}

	std::cout << "　　　　　　　　　　　　　　　　　　　　　　 ┏━━━━━━━━━━━━━━━━━━━┓\n"
		<< "　　　　　　　　　　　　　　　　　　　　　　 ┃　　　　　　　　　 ┃\n"
		<< "　　　　　　　　　　　　　　　　　　　　　　 ┃　　  게임 열기　　┃\n"
		<< "　　　　　　　　　　　　　　　　　　　　　　 ┃　　　　　　　　　 ┃\n"
		<< "　　　　　　　　　　　　　　　　　　　　　　 ┗━━━━━━━━━━━━━━━━━━━┛\n";

	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 7);

	if (menu == 2)
	{
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 6);
	}

	std::cout << "　　　　　　　　　　　　　　　　　　　　　　 ┏━━━━━━━━━━━━━━━━━━━┓\n"
		<< "　　　　　　　　　　　　　　　　　　　　　　 ┃　　　　　　　　　 ┃\n"
		<< "　　　　　　　　　　　　　　　　　　　　　　 ┃　　게임 참여하기　┃\n"
		<< "　　　　　　　　　　　　　　　　　　　　　　 ┃　　　　　　　　　 ┃\n"
		<< "　　　　　　　　　　　　　　　　　　　　　　 ┗━━━━━━━━━━━━━━━━━━━┛\n";

	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 7);

	if (menu == 3)
	{
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 6);
	}

	std::cout << "　　　　　　　　　　　　　　　　　　　　　　 ┏━━━━━━━━━━━━━━━━━━━┓\n"
		<< "　　　　　　　　　　　　　　　　　　　　　　 ┃　　　　　　　　　 ┃\n"
		<< "　　　　　　　　　　　　　　　　　　　　　　 ┃　　  　취소　　　 ┃\n"
		<< "　　　　　　　　　　　　　　　　　　　　　　 ┃　　　　　　　　　 ┃\n"
		<< "　　　　　　　　　　　　　　　　　　　　　　 ┗━━━━━━━━━━━━━━━━━━━┛\n\n";

	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 7);
}

// 연결 설정 메뉴
int ConnectionMenu()
{
	int menu = 1;
	PrintConnectionMenu(menu);

	while (true)
	{
		if (_kbhit())
		{
			switch (_getch())
			{
			// 위
			case 72:
				if (menu > 1)
				{
					menu--;
					PrintConnectionMenu(menu);
				}
				break;

			// 아래
			case 80:
				if (menu < 3)
				{
					menu++;
					PrintConnectionMenu(menu);
				}
				break;

			// 엔터
			case 13:
				switch (menu) {
				// 게임 열기
				case 1:
					return TO_SERVER_MENU;

				// 게임 참여하기
				case 2:
					return TO_CLIENT_MENU;

				// 취소
				case 3:
					return TO_START_MENU;
				}
			}
		}
	}
}

void ServerMenu(int* serverStatus)
{
	int previousServerStatus = UNCALLED;

	while (*serverStatus != CONNECTED)
	{
		if (previousServerStatus != *serverStatus)
		{
			system("cls");
			PrintLogo();

			std::cout << "\n\n\n\n\n\n";

			switch (*serverStatus)
			{
			case FAILED:
				std::cout << " 게임 생성 실패\n"
					<< " 확인 <┛";
				while (_getch() != 13)
				{

				}
				exit(1);

			case UNCALLED:
				std::cout << " 게임 생성 중";
				break;

			case CONNECTING:
				std::cout << " 게임 생성 완료\n"
					<< " 접속자를 기다리는 중";
				break;
			}

			previousServerStatus = *serverStatus;
		}
	}
}

void ClientMenu(int* clientStatus)
{
	int previousClientStatus = UNCALLED;

	while (*clientStatus != CONNECTED)
	{
		if (previousClientStatus != *clientStatus)
		{
			system("cls");
			PrintLogo();

			std::cout << "\n\n\n\n\n\n";

			switch (*clientStatus)
			{
			case FAILED:
				std::cout << " 게임 접속 실패\n"
					<< " 종료 <┛";
				while (_getch() != 13)
				{

				}
				exit(1);

			case IP_INPUT:
				std::cout << " ip 주소:\n ";
				break;

			case CONNECTING:
				std::cout << " 게임 접속 중";
				break;
			}

			previousClientStatus = *clientStatus;
		}
	}
}