#include <stdio.h>
#include <stdlib.h>

int main() {
	int count = 0, result = 0;
	char string[100];
	scanf("%d %s", &count, &string);
	for(int i = 0; i<count; i++) {
		result += (int)string[i]-48;
	}
	printf("%d", result);
	return 0;
}
