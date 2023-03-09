#include <stdio.h>

int main(void) {
	int n = 0, alphabat[27] = {0,}, k = 0, status = 0, count = 0;
	char string[101] = {0,};
	scanf("%d", &n);
	for(int i = 0; i<n; i++) {
		k = 0;
		status = 0;
		for(int j = 0; j<27; j++) {
			alphabat[j] = 0;
		}
		scanf("%s", string);
		while(string[k] != '\0') {
			if(alphabat[(int)string[k] - 97] == 1) {
				if(string[k-1] != string[k]) {
					//printf("%c %c\n", string[k-1], string[k]);
					status = 1;
					break;
				}
			}
			else {
				alphabat[(int)string[k] - 97] = 1;
			}
			k++;
		}
		if(status == 0)
			count++;
	}
	printf("%d", count);
	return 0;
}
