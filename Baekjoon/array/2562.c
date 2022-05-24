#include <stdio.h>

int main() {
	int maxIdx = 0, max = 0,buf = 0;
	scanf("%d", &max);
	maxIdx = 1;
	for(int i = 2; i<=9; i++) {
		scanf("%d", &buf);
		if(buf > max) {
			max = buf;
			maxIdx = i;
		}
	}
	printf("%d\n%d",max, maxIdx);
	return 0;
}
