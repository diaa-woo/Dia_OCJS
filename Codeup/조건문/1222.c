#include<stdio.h>

int main() {
	int a = 0, b = 0, c = 0;
	scanf("%d %d %d",&a,&b,&c);
	b+=1;
	while(a<90) {
		b = b+1;
		a+=5;
	}
	b-=1;
	if(b>c) printf("win");
	else if(b<c) printf("lose");
	else printf("same");
	return 0;
}
