#include <stdio.h>

int main() {
	char string[100] = {0,};
	int alphabat[26] = {0,};
	int i = 0;
	
	scanf("%s", &string);
	
	while(string[i] != '\0') {
		if(alphabat[(int)string[i]-97] == 0) {
			alphabat[(int)string[i]-97] = i+1;
		}
		i++;
	}
	for(int j = 0; j<26; j++) {
		if(alphabat[j] == 0) {
			printf("-1 ");
		}
		else {
			printf("%d ", alphabat[j]-1);
		}
	}
	return 0;
	
}
