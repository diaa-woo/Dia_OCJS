#include<stdio.h>

int main() {
	char front[14] = {0,}, sex = 0, year[3] = {0,}; 
	for(int i = 0; i<14; i++) {
		scanf("%c",&front[i]);
	}
	for(int i = 0; i<10; i++) {
		switch(i) {
			case 0:
				if(front[7] <='2') {
					printf("19");
				}
				else {
					printf("20");
				}
				break;
			case 2:
				printf("%c",front[i-2]);
				break;
			case 3:
				printf("%c",front[i-2]);
				break;
			case 4:
				printf("/");
				break;
			case 5: 
				printf("%c",front[i-3]);
				break;
			case 6:
				printf("%c",front[i-3]);
				break;
			case 7:
				printf("/");
				break;
			case 8: 
				printf("%c",front[i-4]);
				break;
			case 9:
				printf("%c",front[i-4]);
				break;
			default:
				break;
		}
	}
	if(front[7] == '1' || front[7] == '3') sex = 'M';
	else sex = 'F';
	printf(" %c",sex);
	return 0;
}
