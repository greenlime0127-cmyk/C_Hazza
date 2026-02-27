#include <stdio.h>
#include <Windows.h>

int main()
{
	while (true)
	{
		system("cls");
		
		COORD pos;
		pos.X = 10;
		pos.Y = 10;

		SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), pos);

		printf("Hello, World!\n");
		Sleep(100);
	}


	return 0;
}

/*
* 
* 
* 
* 
*/