#include<stdio.h>
#include<Windows.h>

void gotoxy(int x, int y);

int main() {
	CONSOLE_CURSOR_INFO cursorInfo = { 0, };
	cursorInfo.bVisible = 0;
	cursorInfo.dwSize = 1;
	SetConsoleCursorInfo(GetStdHandle(STD_OUTPUT_HANDLE), &cursorInfo);
	gotoxy(3,3);
	printf("бр");
	getch(); 
	return 0;
}

void gotoxy(int x, int y) {
	COORD pos = {x*2,y};
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),pos);
	
}
