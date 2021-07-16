#include<stdio.h>

int main() {
	int a = 0, b = 0, c = 0;
	scanf("%d %d %d", &a,&b,&c);
	if (b<10) {
		if(c<10) printf("%d%d%d",a*10,b*100,c);
		else if(c>10 && c<100) printf("%d%d%d",a*10,b*10,c);
		else printf("%d%d%d",a*10,b,c);
	}
	else if(b>10 && b<100) {
		if(c<10) printf("%d%d%d",a,b*100,c);
		else if(c>10 && c<100) printf("%d%d%d",a,b*10,c);
		else printf("%d%d%d",a,b,c);
	}
	return 0;
}
