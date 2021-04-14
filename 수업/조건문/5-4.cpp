#include <stdio.h>

int main() {
	float dist = 0;
	scanf("%f",&dist);
	if(50<=dist&&60>=dist) {
		printf("WIN");
	}
	else {
		printf("LOSE");
	}
	return 0;
}
