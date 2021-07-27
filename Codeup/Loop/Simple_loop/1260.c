#include<stdio.h>

int main() {
	int a = 0,i,b = 0,c = 0;
	scanf("%d %d",&a,&c);
	for(i = a; i<=c;i++) {
		if(i%3==0) b+=i;
	}
	printf("%d",b);
	return 0;
}
