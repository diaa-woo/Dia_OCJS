#include <stdio.h>

int main() {
	int n = 0, min = 0, max = 0,buf = 0;
	scanf("%d",&n);
	scanf("%d", &min);
	max = min;
	for(int i = 1; i<n; i++) {
		scanf("%d", &buf);
		if(buf > max) max = buf;
		else if(buf < min) min = buf;
	}
	printf("%d %d",min, max);
	return 0;
}
