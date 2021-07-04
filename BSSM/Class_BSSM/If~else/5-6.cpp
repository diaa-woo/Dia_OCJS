#include<stdio.h>

int main () {
	int score = 0;
	char Rate = 0;
	scanf("%d",&score);
	score /= 10;
	switch(score) {
		case 9:
			Rate = 'A';
			break;
		case 8:
			Rate = 'B';
			break;
		case 7:
			Rate = 'C';
			break;
		case 6:
			Rate = 'D';
			break;
		default:
			Rate = 'E';
	}
	printf("%c",Rate);
	return 0;
}
