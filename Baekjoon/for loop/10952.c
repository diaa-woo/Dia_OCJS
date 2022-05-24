#include <stdio.h>

int main() {
	int first = 0, second = 0;
	scanf("%d %d", &first, &second);
	while(first != 0) {
		printf("%d\n", first + second);
		scanf("%d %d", &first, &second);
	} 
	return 0;
}
