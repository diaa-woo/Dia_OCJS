#include<stdio.h>

int main() {
	int n, res, firstNumber, secondNumber;
	scanf("%d", &n);
	if(n%10 == 0) {
		res = n/10;
		res = res * 2;
		res = res % 100;
		printf("%d\n",res);
}
	else {
		firstNumber = n % 10;
		secondNumber = n / 10;
		res = (firstNumber *10 + secondNumber) * 2;
		if (res > 100) res = res %100;
		printf("%d\n",res);
}
	if(res <= 50) printf("GOOD");
	else printf("OH MY GOD");
	return 0;
}
