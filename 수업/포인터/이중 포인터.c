#include <stdio.h>

int main()
{
	int num = 10;
	int *ptr;
	int **pptr;

	ptr = &num;
	pptr = &ptr;

	printf("num : %d, *ptr : %d, **ptr : %d\n", num, *ptr, **pptr);
	printf("num 주소 : %d, ptr 값 : %d, **ptr 값 : %d\n", &num, ptr, *pptr);
	printf("ptr 주소 : %d, pptr 값 : %d", &ptr, pptr);

	return 0;
}
