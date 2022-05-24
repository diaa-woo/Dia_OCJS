#include <stdio.h>

int main() {
	int n = 1, result = 1, i;
	scanf("%d", &n);
	result = n;
	for(i=1; ; i++) {
		if((result/10 + result%10) >= 10) result = result%10*10 + ((result/10 + result%10)-10);
		else result = result%10*10 + (result/10 + result%10);
		if(n == result) break;
	}
	printf("%d",i);
	return 0;
}
