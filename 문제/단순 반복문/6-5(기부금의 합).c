#include<stdio.h>

int main() {
	int n1 = 0, n2 = 0, sum = 0;
	scanf("%d %d",&n1,&n2);
	if(n1%2==0) {
		sum = sum + n1 * 5;
	}
	else sum = sum + (n1/2 + 1);
	if(n2%2==0) sum = sum + n2 *5;
	else sum = sum + (n2/2 + 1);
	printf("%d", sum);
	return 0;
}
