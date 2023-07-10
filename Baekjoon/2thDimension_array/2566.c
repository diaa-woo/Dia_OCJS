#include <stdio.h>
#include <stdlib.h>

int main() {
	int n = 1, m = 1, max = 0, buf;
	for(int i = 1; i<=9; i++) {
		for(int j = 1; j<=9; j++) {
			scanf("%d", &buf);
			if(buf > max) {
				max = buf;
				n = i;
				m = j;
			}
		}
	}
	printf("%d\n%d %d", max, n, m);
	return 0;
	
}
