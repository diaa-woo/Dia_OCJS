#include<stdio.h>

int main() {
	int n = 0,count = 0;
	scanf("%d",&n);
	for(;;) {
		if(n%2==1) count++;
		n/=2;
		if(n == 1) {
			count++;
			break;
		}
		else if(n==0) {
			break;
		}
	}
	printf("%d",count);
}
