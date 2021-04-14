#include<stdio.h> 

int main() {
	char a = '*';
	for(int n = 5; n > 0; n--) {
		for(int j=0;j<n;j++) {
			printf("%c",a);
		}
		printf("\n");
	}
	return 0;
}
