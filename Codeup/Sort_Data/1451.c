#include<stdio.h>

int main() {
	int a[10001] = {0,},temp = 0,k = 0;
	scanf("%d",&k);
	for(int i = 1; i<=k; i++) {
		scanf("%d",&a[i]);
	}
	for(int i = 1;i<=k; i++) {
		for(int j = i+1; j<=k; j++) {
			if(a[i]>a[j]) {
				temp = a[j];
				a[j] = a[i];
				a[i] = temp;
			}
		}
	}
	for(int i = 1; i<=k; i++) {
		printf("%d\n",a[i]);
	}
	return 0;
	
}
