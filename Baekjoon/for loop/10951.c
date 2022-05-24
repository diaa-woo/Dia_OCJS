#include <stdio.h>

int main() {
	int first = 0, second = 0;
	while((scanf("%d %d", &first, &second))==2) {
		printf("%d\n", first + second);
	}
	return 0;
}
