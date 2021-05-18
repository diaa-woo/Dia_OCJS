#include<stdio.h>

int main() {
	int a = 0, b = 0, c = 0;
	scanf("%d %d %d",&a,&b,&c);
	if(a+c<b) printf("advertise");
	else if(a+c>b) printf("do not advertise");
	else printf("does not matter");
	return 0;
}
