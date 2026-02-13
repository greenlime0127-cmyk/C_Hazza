#include <stdio.h>
#include <Windows.h>

enum color
{
	Black,
	DarkBlue,
	DarkGreen,
	DarkCyan,
	DarkRed,
	DarkMagenta,
	DarkYellow,
	Gray,
	DarkGray,
	Blue,
	Green,
	Cyan,
	Red,
	Magenta,
	Yellow,
	White,

};

struct Obj
{
	int x;
	int y;
	const char* shape;
};

void SetPosition(int x, int y)
{
	COORD pos;
	pos.X = x;
	pos.Y = y;

	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), pos);
}

int main()
{

	Obj player;
	player.x = 10;
	player.y = 10;
	color(Blue);
	player.shape = "Hello, World!";

	while (true)
	{
		system("cls");

		SetPosition(player.x , player.y);
		printf(player.shape);

		Sleep(50);
	}

	return 0;
}
