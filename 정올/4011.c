#include<stdio.h>

int main() {
	char front[6] = {0,}, end[7] = {0,}, sex = 0, year[3] = {0,}; 
	scanf("%s-%s",&front,&end);
	if(end[0] == '1' && end[0] == '2') for(int i = 0; i<3; i++) {
		if(i == 0) {
			year[0] = '19';
			continue;
		}
		else year[i] = front[i-1];
	}
	if(end[0] == '1' || end[0] == '3') sex = 'M';
	else sex = 'F';
	for(int i = 0; i<9; i++) {
		if(i<3) {
			printf("%c",year[i]);
			continue;
		}
		else if(i == 4 || i == 7) printf("/");
		else if(i == 5 || i == 6) printf("%c",front[i-3]);
		else if(i == 8 || i == 9) printf("%c",front[i-5]);
	}
	printf(" %c",sex);
	return 0;
}
