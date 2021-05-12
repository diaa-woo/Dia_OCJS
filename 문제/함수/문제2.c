#include <stdio.h>

int big(int a[10]) 
{
	int max = 0;
	for(int i = 0; i<=9; i++) {
		if (max<a[i]) max =a[i];
	}
	return max;
}

int small(int a[10]) 
{
int min = 0;
	for(int i = 0; i<=9; i++) {
		if (min>a[i]) min =a[i];
	}
	return min;
}

main( ) 
{
  int score[10]={18, 77, 68, 54, 99, -15, 56, 97, 64, 48};
  int i = 0, max = 0, min = 0;
	printf("%d\n",big(score));
	printf("%d\n",small(score));
	
	
}

