#include <iostream>
#include <Windows.h>
#include <conio.h>
#include "connection.h"

#define BLACK 1
#define WHITE 2

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
		<< "　　　　　　　　　　　　　　　　　　　　　　 ┗━━━━━━━━━━━━━━━━━━━┛\n";

	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 7);
}

// 설명 출력
int Help()
{
	system("cls");
	PrintLogo();

	std::cout << "\n\n\n 키보드 방향키로 보드판의 커서(■□)를 이동시킬 수 있습니다.\n"
		<< " 엔터를 입력하면 커서가 있는 위치에 돌(●○)을 놓습니다.\n"
		<< " 만약 돌을 놓을 수 있는 곳이 없다면 자동으로 턴이 넘겨집니다.\n"
		<< " 흑이 선공, 백이 후공이며 흑백 선택은 선착순입니다.\n"
		<< " 이 외의 룰은 보드게임 오델로와 같습니다.\n\n"
		<< " 확인 <┛";

	// 엔터 입력 시 종료
	while (true)
	{
		if (_kbhit())
		{
			if (_getch() == 13)
			{
				break;
			}
		}
	}

	return 1;
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
			int key = _getch();

			switch (key) {
			
			// 위쪽 메뉴로 이동
			case 72:
				if (menu > 1)
				{
					menu--;
					PrintStartMenu(menu);
				}
				break;

			// 아래쪽 메뉴로 이동
			case 80:
				if (menu < 3)
				{
					menu++;
					PrintStartMenu(menu);
				}
				break;

			// 메뉴 선택
			case 13:
				switch (menu) {
				// 시작
				case 1:
					return 3; // 연결 메뉴로 이동

				// 설명
				case 2:
					return 2; // 설명으로 이동
					break;

				// 종료
				case 3:
					return 0;
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
		<< "　　　　　　　　　　　　　　　　　　　　　　 ┗━━━━━━━━━━━━━━━━━━━┛\n";

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
			int key = _getch();

			switch (key) {
			case 72:
				if (menu > 1)
				{
					menu--;
					PrintConnectionMenu(menu);
				}
				break;

			case 80:
				if (menu < 3)
				{
					menu++;
					PrintConnectionMenu(menu);
				}
				break;

			case 13:
				switch (menu) {
				case 1:
					return 4;

				case 2:
					return 5;

				case 3:
					return 1;
				}
			}
		}
	}
}

void ServerMenu(int serverStatus)
{
	system("cls");
	PrintLogo();

	std::cout << "\n\n\n\n\n\n";

	switch (serverStatus)
	{
	case -1:
		std::cout << " 게임 생성 실패\n"
			<< " 확인 <┛";
		break;

	case 0:
		std::cout << " 게임 생성 중";
		break;

	case 1:
		std::cout << " 게임 생성 완료\n"
			<< " 접속자를 기다리는 중";
		break;
	}
}

void ClientMenu(int clientStatus)
{
	system("cls");
	PrintLogo();

	std::cout << "\n\n\n\n\n\n";

	switch (clientStatus)
	{
	case -1:
		std::cout << " 게임 접속 실패\n"
			<< " 종료 <┛";
		break;

	case 0:
		std::cout << " ip 주소:\n ";
		break;

	case 1:
		std::cout << " 게임 접속 중";
		break;
	}
}

void PrintColorMenu(int menu, int color, int opponentColor)
{
	system("cls");
	PrintLogo();

	std::cout << "\n　　　　　　　　　　　　　　　　　　　　　　　 ※흑이 선공입니다\n\n\n";

	// 메뉴 출력

	if (menu == 1)
	{
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 6);
	}

	std::cout << "　　　　　　　　　　　　　　　　　　　　　　 ┏━━━━━━━━━━━━━━━━━━━┓\n"
		<< "　　　　　　　　　　　　　　　　　　　　　　 ┃　　　　　　　　　 ┃\n"
		<< "　　　　　　　　　　　　　　　　　　　　　　 ┃　　  　 흑　　　　┃ "
		<< (color == 1 ? "내가 선택함" : (opponentColor == 1 ? "상대가 선택함" : ""))
		<< "\n　　　　　　　　　　　　　　　　　　　　　　 ┃　　　　　　　　　 ┃\n"
		<< "　　　　　　　　　　　　　　　　　　　　　　 ┗━━━━━━━━━━━━━━━━━━━┛\n";

	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 7);

	if (menu == 2)
	{
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 6);
	}

	std::cout << "　　　　　　　　　　　　　　　　　　　　　　 ┏━━━━━━━━━━━━━━━━━━━┓\n"
		<< "　　　　　　　　　　　　　　　　　　　　　　 ┃　　　　　　　　　 ┃\n"
		<< "　　　　　　　　　　　　　　　　　　　　　　 ┃　　　　 백　　　　┃ "
		<< (color == 2 ? "내가 선택함" : (opponentColor == 2 ? "상대가 선택함" : ""))
		<< "\n　　　　　　　　　　　　　　　　　　　　　　 ┃　　　　　　　　　 ┃\n"
		<< "　　　　　　　　　　　　　　　　　　　　　　 ┗━━━━━━━━━━━━━━━━━━━┛\n";

	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 7);
}

// 흑백 선택 메뉴
int ColorMenu()
{
	int menu = 1;
	int color = 0;
	int opponentColor = 0;

	PrintColorMenu(menu, color, opponentColor);

	while (true)
	{
		if (receive.length() > 0)
		{
			if (receive == "black")
			{
				opponentColor = BLACK;
			}
			else if (receive == "white")
			{
				opponentColor = WHITE;
			}
			else
			{
				opponentColor = 0;
			}

			PrintColorMenu(menu, color, opponentColor);
			receive = "";
		}

		if (_kbhit())
		{
			int key = _getch();

			switch (key) {

				// 위쪽 메뉴로 이동
			case 72:
				if (menu > 1)
				{
					menu--;
					PrintColorMenu(menu, color, opponentColor);
				}
				break;

				// 아래쪽 메뉴로 이동
			case 80:
				if (menu < 2)
				{
					menu++;
					PrintColorMenu(menu, color, opponentColor);
				}
				break;

				// 메뉴 선택
			case 13:
				if (menu == 1 && opponentColor != BLACK)
				{	
					if (color == BLACK)
					{
						Send("cancel");
						color = 0;
					}
					else
					{
						Send("black");
						color = BLACK;
					}
					
					PrintColorMenu(menu, color, opponentColor);
				}
				else if (menu == 2 && opponentColor != WHITE)
				{
					if (color == WHITE)
					{
						Send("cancel");
						color = 0;
					}
					else {
						Send("white");
						color = WHITE;
					}

					PrintColorMenu(menu, color, opponentColor);
				}
				break;
			}
		}

		if (color != 0 && opponentColor != 0)
		{
			return color;
		}
	}
}