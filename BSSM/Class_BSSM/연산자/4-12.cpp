#include<stdio.h>

int main() {
	int Input = 0, Money = 0, Change = 0, coin5 = 0, coin1 = 0;
	scanf("%d %d", &Input, &Money);
	Change = Input - Money;
	coin5 = Change / 500;
	coin1 = (Change % 500) /100;
	printf("%d %d %d",Change,coin5,coin1);
	return 0; 
}
