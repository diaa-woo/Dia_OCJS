#include<stdio.h>

//º¸·ù 
int main() {
	for(int i = 0; i<5; i++) {
		for(int j=4; j>0; j--) {
			printf(" ");
		}
		for(int j=0; j<i+j; j++) {
			printf("*");
		}
		for(int j=0; j<i; j++) {
			printf("*");
		}
		printf("\n");
	}
	return 0;
}
