#include <stdio.h>

int main()
{
	int num = 10, num2 = 20;
	int *ptr1 = &num;
	const int* const ptr2 = &num;

	ptr1 = &num2;

	*ptr2 = 30;
	ptr2 = &num2;

	return 0;
}

