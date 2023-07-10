#include <stdio.h>

int main() {
	char string[100] = {0,}, i;
	scanf("%s", string);
	while(string[i] != '\0') {
		if(string[i] <= 90) 
			printf("%c", string[i] + 32);
		else 
			printf("%c", string[i] - 32);
		i++;
	}
	return 0;
}
