#include<stdio.h> 

int main() {
	char a = '*';
	for(int n = 0; n <= 1000; n++) {
		for(int j =0; j<=n; j++) {
		printf("%c", a);
	}
	printf("\n");
	}
}
