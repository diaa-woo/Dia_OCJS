#include <stdio.h>

int main() {
	char string[1000001] = {0,};
	int alphabat[26] = {0,}, j = 0, mostDuplicatedStatus = 0, max = 0, maxIndex = 0;
	
	scanf("%s", &string);
	while(string[j] != '\0') {
		if((int)string[j] >= 97) {
			alphabat[(int)string[j] - 97] += 1;
		}
		else {
			alphabat[(int)string[j] - 65] += 1;
		}
		j++;
	}
	max = alphabat[0];
	for(int i = 1; i<=25; i++) {
		if(alphabat[i] > max) {
			mostDuplicatedStatus = 0;
			max = alphabat[i];
			maxIndex = i;
		}
		else if(alphabat[i] == max) {
			mostDuplicatedStatus = 1;
		}
	}
	if(mostDuplicatedStatus == 1) {
		printf("?");
	}
	else {
		printf("%c", maxIndex + 65);
	}
	return 0;
}
