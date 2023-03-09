#include <stdio.h>
#include <stdlib.h>
#define SWAP(x, y) {int tmp=x; x = y; y = tmp;}


int main() {
	char inputString[10] = {};
	char string0[4] = {};
	char string1[4] = {};
	int a, b;
	int j = 0, m = 0;
	scanf("%[^\n]s", inputString);
	while(inputString[j] != '\0') {
		if(j < 3) {
			string0[m] = inputString[j];
			m++;
		}
		else if (j == 3) 
			m = 0;
		else {
			string1[m] = inputString[j];
			m++;
		}
		j++;
	}
	SWAP(string0[0], string0[2]);
	SWAP(string1[0], string1[2]);
	a = atoi(string0);
	b = atoi(string1);
	
	if(a > b) 
		printf("%d", a);
	else 
		printf("%d", b);
	/*
		if(string0[0] == string1[0]) {
			if(string0[1] == string1[1]) {
				if(string0[2] > string1[2]) {
					printf("%s", string0);
				}
				else {
					printf("%s", string1);
				}	
			}
			else if(string0[1] > string1[1]) {
				printf("%s", string0);
			}
			else {
				printf("%s", string1);
			}
		}
		else if(string0[0] > string1[0]) {
			printf("%s", string0);
		}
		else {
			printf("%s", string1);
		}
	*/
	
}
