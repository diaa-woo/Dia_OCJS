#include <stdio.h>

int main()
{
	int n1, n2, sum=0;
	scanf("%d %d", &n1, &n2);
	
	if(n1 % 2 == 0){	// n1 is even.
		sum += n1 * 5;
	} else{
		sum += n1 / 2 + 1;
	}
	if(n2 % 2 == 0) { 	// n2 is even
		sum += n2 * 5;
	} else{
		sum += n2 / 2 + 1;
	}
	
	printf("%d", sum);
	return 0;
}
