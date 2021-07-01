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
	
	printf("왼쪽 : %d, 오른쪽 : %d", left, right);
	
	return 0;
}
