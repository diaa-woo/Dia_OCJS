#include<stdio.h>

int main() {
	int a = 0, b = 0;
	scanf("%d %d",&a,&b);
	if((a%4 == 0 && a%100!=0)||a%400==0) {
		switch(b) {
			case 1:
			case 3:
			case 5:
			case 7:
			case 8:
			case 10:
			case 12:
				printf("%d",31);
				break;
			case 4:
			case 6:
			case 9:
			case 11:
				printf("%d",30);
				break;
			case 2:
				printf("%d",29);
				break;
		}
	}
	else {
		switch(b) {
			case 1:
			case 3:
			case 5:
			case 7:
			case 8:
			case 10:
			case 12:
				printf("%d",31);
				break;
			case 4:
			case 6:
			case 9:
			case 11:
				printf("%d",30);
				break;
			case 2:
				printf("%d",28);
				break;
		}
	}
	return 0;
}
