#include <stdio.h>

int main() {
	int i = 0;
	char string[100];
	scanf("%s", string);
	while(string[i] != '\0') {
		i++;
	}
	printf("%d",i);
	return 0;
}
