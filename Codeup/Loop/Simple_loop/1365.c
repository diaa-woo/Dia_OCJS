#include<stdio.h>

int main() {
	int a = 0;
	scanf("%d",&a);
	for(int i = 1; i<=a;i++) {
		for(int j = 1; j<=a;j++) {
			if(i==1||i==a) {
				printf("*");
			}
			else if(j==1||j==a) printf("*"); 
			else if(j==a-i+1||j==(a-(a-i))) printf("*");
			else printf(" ");
		}
		printf("\n");
	}
}
