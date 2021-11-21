#include<stdio.h>
#include<stdlib.h>

int main() {
	int n = 0,min = 0;
	int *arr;
	scanf("%d",&n);
	arr = calloc(n,sizeof(int));
	for(int i = 0; i<n; i++) {
		scanf("%d",&arr[i]);
	}
	min = arr[n-1];
	for(int i = n-2; i>=0; i--) {
		if(min > arr[i]) min = arr[i];
	}
	printf("%d",min);
	free(arr);
	return 0;
}
