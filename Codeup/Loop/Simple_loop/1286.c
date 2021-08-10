#include<stdio.h>

int main() {
	int a[4] = {0,},max = 0,min = 0;
	for(int i = 0; i<=4; i++) {
		scanf("%d",&a[i]);
		if(i == 0) {
			max = a[i];
			min = a[i];
			continue;
		}
		else if(a[i]>max) {
			max = a[i];
		}
		else if(a[i]<min) {
			min = a[i];
		}
	}
	printf("%d\n%d",max,min);
	return 0;
}
