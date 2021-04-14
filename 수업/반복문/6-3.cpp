#include<stdio.h>

int main() {
	char data = 0;
	scanf("%c", &data);
	while(data != 'q') {
		printf("%c",data);
		scanf("%c",&data);
	}
	return 0;
}
