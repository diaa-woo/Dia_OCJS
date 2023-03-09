#include <stdio.h>
#include <stdlib.h>

int main() {
	long long int originalTotal, inputTotal = 0;
	int a,b,count;
	
	scanf("%d %d", &originalTotal, &count);

	for(int i = 0; i < count; i++) {
		scanf("%d %d", &a, &b);
		inputTotal += (a * b);
	}	
	
	if(inputTotal == originalTotal) 
		printf("Yes");
	else 
		printf("No");
	return 0;
	
}
