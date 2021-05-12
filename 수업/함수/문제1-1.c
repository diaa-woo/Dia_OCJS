#include <stdio.h>
int f(int a, int b)
{
	printf("%d\n",a+b);
	if(a<b) printf("%d", b-a);
	else printf("%d",a-b);
	return 0;
}

main( ) 
{
	int a,b;
	scanf("%d %d", &a, &b);
	f(a,b);
	
}


