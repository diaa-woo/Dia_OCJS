#include <stdio.h>

int n;

void reclusive(int i) {
	if(i>n) return;
	else {
		printf("%d\n", i);
		reclusive(i+1);
	}
}


int main() {
	scanf("%d", &n);
	reclusive(1);
	return 0;
}
