#include <stdio.h>

int main() {
	char string [1001] = {0,};
	int count = 0;
	scanf("%s %d", string, &count);
	printf("%c", string[count-1]);
	return 0;
}
