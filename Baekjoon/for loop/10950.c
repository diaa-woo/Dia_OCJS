#include <stdio.h>
#include <stdlib.h>

int main() {
	int n = 0;
	int *a, *b;
	scanf("%d", &n);
	a = calloc(n,sizeof(int));
	b = calloc(n,sizeof(int));
	for(int i = 0; i<n; i++) {
		scanf("%d %d", &a[i], &b[i]);
	}
	for(int i = 0; i<n; i++) {
		printf("%d\n", a[i]+b[i]);
	}
	free(a);
	free(b);
	return 0;
}
