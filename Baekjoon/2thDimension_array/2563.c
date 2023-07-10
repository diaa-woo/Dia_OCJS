#include <stdio.h>

int main() {
	int drawer[101][101] = {0,};
	int n = 0, x, y, count;
	scanf("%d", &n);
	for(int i = 0; i<n; i++) {
		scanf("%d %d", &x, &y);
		for(int i = x; i<(x+10); i++) {
			for(int j = y; j<(y+10); j++) {
				drawer[i][j] = 1;
			}
		}
	}	
	for(int i = 0; i<100; i++) {
		for(int j = 0; j<100; j++) {
			if(drawer[i][j] == 1)
				count++;
		}
	}
	printf("%d", count);
	return 0;
}
