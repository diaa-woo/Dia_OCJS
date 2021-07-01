#include<stdio.h>

int main() {
	char input_value[50] = {};
	scanf("%s",input_value);
	printf("%.4s",input_value);
	printf("%3.2s",input_value);
	return 0;
}
