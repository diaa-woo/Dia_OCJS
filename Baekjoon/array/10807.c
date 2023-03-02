#include <stdio.h>
#include <stdlib.h>

int main() {
	int a = 0, count = 0, result = 0;
	int *b = 0;
	
	scanf("%d", &count);
	b = calloc(count, sizeof(int));
	
	for(int i = 0; i<count; i++) {
		scanf("%d", &b[i]);
	}
	scanf("%d",&a);
	for(int i = 0; i<count; i++) {
		if(b[i] == a) 
			result++;
	}
	printf("%d", result);
	free(b);
	return 0;
}
