#include<stdio.h>

int main() {
	int a = 0;
	scanf("%d", &a);
	if((2013 - a) / 100 == 19) printf("%d 1",(2012 - a) +1 - 1900);
	else printf("%d 3", (2012 - a) -2000 +1 ); 
	return 0;
}
