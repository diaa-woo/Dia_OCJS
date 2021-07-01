#include <stdio.h>

void swap(int a, int b)
{
	int temp;
	
	temp = a;
	a = b;
	b = temp;
	printf("swap 실행중 : %d %d\n", a, b);
}
 
int main()
{
	int a, b;
	
	a = 10;
	b = 20;
	
	printf("swap 전 : %d %d\n", a, b);
	
	swap(a, b);
	
	printf("swap 후 : %d %d\n", a, b);
	
	return 0;
}
