#include<stdio.h>

int main() {
	int i = 0, a = 10, sum = 0;
	for(i = 1; i <= a; i++) {
		if(i%2==0) sum = sum + i;
	}
	printf("%d",sum);
	return 0;
}
