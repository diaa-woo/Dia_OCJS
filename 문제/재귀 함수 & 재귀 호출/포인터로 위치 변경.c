 #include <stdio.h>

int swapStudent(int *a, int *b)
{
	int temp;
	if(*a>*b)
	{
		temp = *a;
		*a = *b;
		*b = temp;
	}
}

int main()
{
	int left;
	int right;
	scanf("%d", &left);
	scanf("%d", &right);
	
	swapStudent(&left,&right);
	
	printf("���� : %d, ������ : %d", left, right);
	
	return 0;
}
