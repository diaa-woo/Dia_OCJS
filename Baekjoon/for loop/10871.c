#include<stdio.h>

int main() {
	int first = 0, second = 0, buf = 0;
	scanf("%d %d",&first, &second);
	for(int i = 0; i<first; i++) {
		scanf("%d", &buf);
		if(second > buf) printf("%d ",buf);
	}
	return 0;
}
