#include<stdio.h>

int main() {
	int a = 0,b = 0,max = 0;
	scanf("%d",&a);
	for(int i = 1; i<=a; i++) {
		scanf("%d",&b);
		if(max < b) max = b; 
	}
	printf("%d",max);
	return 0;
}
