#include <stdio.h>

int main()
{
	int num = 10;
	int *ptr1 = &num;
	const int *ptr2 = &num;

	*ptr1 = 20;
	num = 30;

	*ptr2 = 40;

	return 0;
}
