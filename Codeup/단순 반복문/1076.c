#include<stdio.h>

int main() {
	char a = 0;
	scanf("%c",&a);
	for(char i = 97;i!=a+1;i++) {
		printf("%c ",i);
	}
	return 0;
}
