#include <stdio.h>

void swap(int a, int b)
{
	int temp;
	
	temp = a;
	a = b;
	b = temp;
}

int main()
{
	int a, b;
	
	a = 10;
	b = 20;
	
	printf("swap Àü : %d %d\n", a, b);
	
	swap(a, b);
	
	printf("swap ÈÄ : %d %d\n", a, b);
	
	return 0;
}
