#include<stdio.h>
#include<stdlib.h>

int main() {
	int n = 0;
	int *arr;
	scanf("%d",&n);
	arr = calloc(n,sizeof(int));
	for(int i = 0; i<n; i++) {
		scanf("%d",&arr[i]);
	}
	for(int i = n-1; i>=0; i--) {
		printf("%d ",arr[i]);
	}
	free(arr);
	return 0;
}
