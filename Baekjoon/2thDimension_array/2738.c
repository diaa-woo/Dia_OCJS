#include <stdio.h>
#include <stdlib.h>

int main() {
	int n = 0, m = 0, buf = 0;
	scanf("%d %d", &n, &m);
	
	int** arr1 = (int**)malloc(sizeof(int*) * n);
	int** arr2 = (int**)malloc(sizeof(int*) * n);

	for(int i = 0; i< n; i++) {
		arr1[i] = (int*)malloc(sizeof(int) * m);
		arr2[i] = (int*)malloc(sizeof(int) * m);
	}
	
	for(int i = 0; i<n; i++) {
		for(int j = 0; j<m; j++) {
			scanf("%d", &buf);
			arr1[i][j] = buf;
		}
	}
	for(int i = 0; i<n; i++) {
		for(int j = 0; j<m; j++) {
			scanf("%d", &buf);
			arr2[i][j] = buf;
		}
	}
	
	for(int i = 0; i<n; i++) {
		for(int j = 0; j<m; j++) {
			printf("%d ", arr1[i][j] + arr2[i][j]);
		}
		printf("\n");
	}
	
	free(arr1);
	free(arr2);
	
	return 0;
}
