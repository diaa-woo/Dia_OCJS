#include <stdio.h>

int main() {
	char string[1000000] = {};
	int count = 0, i = 0;
	scanf("%[^\n]s", string);
	while(string[i] != '\0') {
		if(string[i] == ' ') {
			//printf("%d\n", (int)string[i-1]);
			if(((int)string[i-1] >= 97 && (int)string[i-1] <= 122) || ((int)string[i-1] >= 65 && (int)string[i-1] <= 90)) {
				count++;
			}
		}
		i++;
	}
	if(string[i-1] != ' ')
		count++;
	printf("%d", count);
	return 0;
}
