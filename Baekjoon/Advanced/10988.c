#include <stdio.h>
#define SWAP(x,y) {int tmp=x; x=y; y=tmp;}

int main() {
	char string[102] = {0,}, string_copy[102] = {0,};
	int count = 0, status = 1;
	scanf("%s", string);
	while(string[count] != '\0') {
		string_copy[count] = string[count];
		count++;
	}
	//printf("%d %d\n", count, count/2);
	for(int i = 0; i<count/2; i++) {
		SWAP(string_copy[i], string_copy[count-1-i]);
	}
	for(int i = 0; i<count; i++) {
		if(string[i] != string_copy[i]) {
			status = 0;
			break;
		}
	}
	printf("%d", status);
	return 0;
}
