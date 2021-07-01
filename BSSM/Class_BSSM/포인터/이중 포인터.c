#include <stdio.h>

int main()
{
	int num = 10;
	int *ptr;
	int **pptr;

	ptr = &num;
	pptr = &ptr;

	printf("num : %d, *ptr : %d, **ptr : %d\n", num, *ptr, **pptr);
	printf("num 林家 : %d, ptr 蔼 : %d, **ptr 蔼 : %d\n", &num, ptr, *pptr);
	printf("ptr 林家 : %d, pptr 蔼 : %d", &ptr, pptr);

	return 0;
}
