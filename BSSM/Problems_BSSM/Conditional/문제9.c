#include<stdio.h>

int main() {
	int a , b = 0;
	char c = 0;
	scanf("%d%c%d",&a,&c,&b);
	switch(c) {
		case '+' :
			printf("%d",a+b);
			break;
		case '-' :
			printf("%d",a-b);
			break;
		case '*' :
			printf("%d",a*b);
			break;
		case '/' :
			printf("%d",a/b);
			break;
		
	}
}
