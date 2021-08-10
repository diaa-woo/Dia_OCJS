#include<stdio.h>

int main() {
	int a[24] ={0,},count = 0,check;
	scanf("%d",&count);
	for(int i = 1; i<=count;i++) {
		scanf("%d",&check);
		a[check]++;
	}
	for(int j = 1; j<=23; j++) {
		printf("%d ",a[j]);
	}
	return 0;
}
