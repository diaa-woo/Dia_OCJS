#include <stdio.h>

int main() {
	int count = 0, j = 0;
	char bufString[1000] = {0,};
	char bufFE[1000][2];
	scanf("%d", &count);
	for(int i = 0; i<count; i++) {
		j = 0;
		scanf("%s", &bufString);
		while(bufString[j] != '\0') {
			if(j == 0) 
				bufFE[i][0] = bufString[j];
			j++;
		}
		bufFE[i][1] = bufString[j-1];
	}
	for(int i = 0; i<count; i++) {
		printf("%c%c\n", bufFE[i][0], bufFE[i][1]);
	}
	return 0;
}
