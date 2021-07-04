#include <stdio.h>

int main()
{
	int num1 = 10, num2 = 20;
	int *ptr1 = &num1;
	int* const ptr2 = &num1;
	
	ptr1 = &num2;
	
	*ptr2 = 30;
	ptr2 = &num2;
	
	return 0;
}
