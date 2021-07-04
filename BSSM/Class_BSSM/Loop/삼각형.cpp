#include<stdio.h>

//우수경 코드 
int main() {
	int i = 0, j = 0;
	for(j=1; j<=5; j++) {
		for(i=5;i>=j;i--) {
			printf(" ");
		}
		for(i=1;i<=j;i++) {
			printf("* ");
		}
		printf("\n");
	} 
	return 0;
}
