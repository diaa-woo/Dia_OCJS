#include<stdio.h>

int main() {
	int a = 0;
	scanf("%d",&a);
	if((a>=30 && a<=40)||(a>=60 && a<=70)) printf("win");
	else printf("lose");
	return 0;
}
