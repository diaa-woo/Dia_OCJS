#include<stdio.h>

int main() {
	int a = 0,b = 0;
	scanf("%d %d",&a,&b);
	for(int i = a; i<=b; i++) {
		for(int j = 1; j!=10;j++) {
			printf("%d*%d=%d\n",i,j,i*j);
		}
	}

	return 0;
}
