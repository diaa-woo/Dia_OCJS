#include <stdio.h>
int add (int a, int b) {
	return a+b;
}
int sub (int a,int b) {
	if(b>a) return b-a;
	else return a-b;
}
int f(int a, int b)
{
	int max = a;
	if(b>a) max = b;
	return max;
}

main( ) 
{
	int a,b;
	scanf("%d %d", &a, &b);
	printf("%d\n",f(a,b));
	printf("%d\n",add(a,b));
	printf("%d\n",sub(a,b));
}


