#include<stdio.h>

int main() {
	int num = 0;
	scanf("%d", &num);
	while(num > 0) {
		if (num%2==1) {
		printf("Ȧ��\n");
	}
		else{
		printf("¦��\n");
	}
	scanf("%d", &num);
	}

	return 0;
}
