#include<stdio.h>

int main() {
	int a = 0,b = 0;
	scanf("%d",&a);
	for(int i = 1; i<=a; i++) {
		if(i%10!=1) continue; 
		b++;
	}
	printf("%d",b);
}
