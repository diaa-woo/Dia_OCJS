#include <stdio.h>
#include <stdlib.h>

int main() {
	int n = 0,m = 0, s = 0, e = 0, ball = 0;
	int *array = 0;
	scanf("%d %d", &n, &m);
	array = calloc(n, sizeof(int));
	for(int i = 0; i<m; i++) {
		scanf("%d %d %d", &s, &e, &ball);
		for(int j = (s-1); j<e; j++) {
			array[j] = ball;
		}
	}
	for(int i = 0; i<n; i++) {
		printf("%d ", array[i]);
	}
	return 0;
	
}
