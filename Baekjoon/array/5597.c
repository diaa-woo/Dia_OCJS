#include <stdio.h>

int main() {
	int a = 0, b;
	for(int i = 0; i<28; i++) {
		scanf("%d", &b);
		a |= (1 << (b-1));
	}
	for(int i = 1; i<=30; i++) {
		if(a & 0x01) {
			a = a >> 1;
			continue;
		}
		else 
			printf("%d\n", i);
		a = a >> 1;
	}
	return 0;
}
