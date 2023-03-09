#include <stdio.h>

int main() {
	int count, loop, j;
	char buf[1000][161] = {0,};
	char string[20] = {0,};
	
	scanf("%d", &count);
	
	for(int i = 0; i<count; i++) {
		j = 0;
		scanf("%d %s", &loop, &string);
		while(string[j] != '\0') {
			for(int k = 0; k<loop; k++) {
				buf[i][(j*loop)+k] = string[j];
			}
			j++;
		}
	}	
	for(int k = 0; k<count; k++) {
		printf("%s\n", buf[k]);
	}
	return 0;
}
