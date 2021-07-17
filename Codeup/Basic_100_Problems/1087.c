#include<stdio.h>

int main() {
	int a = 0,sum = 0,i;
	scanf("%d",&a);
	for(i = 0; ;i++) {
		sum += i;
		if(sum>=a) {
			break;
		}
	}
	printf("%d",sum);
	return 0;
}
