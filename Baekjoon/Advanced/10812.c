#include <stdio.h>
#include <stdlib.h>

int main() {
	int n, m, i, j, k;
	int buf[101] = {0,};
	int *arr;
	scanf("%d %d", &n, &m);
	arr = calloc(n+2, sizeof(int));
	for(int a = 1; a<=n; a++) {
		arr[a] = a;
	}
	for(int a = 0; a<m; a++) {
		scanf("%d %d %d", &i, &j, &k);
		for(int l = 0; l<=j-k; l++) {
			buf[l] = arr[k+l];
		}
		for(int l = k-1; l>=i; l--) {
			arr[l + (j-k+1)] = arr[l];
		}
		for(int l = 0; l<=j-k; l++) {
			arr[i+l] = buf[l];
		}
	}
	for(int a = 1; a<=n; a++) {
		if(a==n) 
			printf("%d", arr[a]);
		else 
			printf("%d ", arr[a]);
	}
	free(arr);
	return 0;
}
