#include<stdio.h>
#include<stdlib.h>
#include<Windows.h>

int main() {
	int a = 0; 
	int b = 0;
	Sleep(1000);
	printf("Hello?\n");
	Sleep(1500);
	printf("I'm a Game Bot!\n");
	Sleep(1500);
	printf("I want to play with you!\n");
	Sleep(1500);
	printf("Please Enter 0~2\n");
	Sleep(1500);
	printf("If you want to quit, please enter 3\n");
	Sleep(1500);
	printf("Have fun!\n");
	Sleep(750);
	do {
		printf("Please enter the number: ");
		scanf("%d",&a);
		b = rand() % 3;
		if(a== b) {
			printf("Me (%d) Bot (%d) Draw! \n",a,b);
		}
		else if ((a == 0 && b == 1) || (a== 1 && b == 2) || (a == 2 && b == 0)) {
			printf("Me (%d) Bot (%d) Win! \n",a,b);
		}
		else if((a == 0 && b == 2) || (a == 1 && b == 0) || (a == 2 && b == 1)) {
			printf("Me (%d) Bot(%d) Lose.. \n",a,b);
		} 
		else if(a!=3){
			printf("You've got a wrong number! Please enter again\n");
			Sleep(1000);
		}
	}while(a!=3);
	printf("\nIt's the End! Thank you for use this program!\n");
	return 0;
}
