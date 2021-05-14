#include<stdio.h>

int main() {
	int a = 0, b = 0, max = 0, upper_1 = 1, upper_2 = 1;
	scanf("%d %d", &a, &b);
	max = a + b;
	for(int i = 0; i<b; i++) {
		upper_1 = upper_1 *a;
	}
	for(int j = 0; j<a; j++) {
		upper_2 = upper_2*b;
	}
	if(max< b+a) max = b + a;
	if(max < a-b) max = a-b;
	if(max < b-a) max = b-a;
	if(max < a*b) max = a*b;
	if(max < a/b) max = a/b;
	if(max < b/a) max = b/a;
	if(max < upper_1) max = upper_1;
	if(max < upper_2) max = upper_2;
	printf("%f",(float)max);
	return 0;
}
