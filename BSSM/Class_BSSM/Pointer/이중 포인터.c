#include <stdio.h>

int main()
{
	int num = 10;
	int *ptr;
	int **pptr;

	ptr = &num;
	pptr = &ptr;

	printf("num : %d, *ptr : %d, **ptr : %d\n", num, *ptr, **pptr);
	printf("num �ּ� : %d, ptr �� : %d, **ptr �� : %d\n", &num, ptr, *pptr);
	printf("ptr �ּ� : %d, pptr �� : %d", &ptr, pptr);

	return 0;
}
