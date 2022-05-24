#include<stdio.h>

int main() {
	int a = 0, b = 0, c = 0, base = 0, buf = 0, arr[11] = {0,};
	scanf("%d %d %d",&a,&b,&c);
	base = a*b*c;
	while(1) {
		buf = base % 10;
		arr[buf] += 1;
		base /=10;
		if(base < 10) {
			arr[base%10] += 1;
			break;
		}
	}
	for(int i = 0; i<10; i++) {
		printf("%d\n",arr[i]);
	}
	return 0;
}
