#include<stdio.h>

int main() {
	int a = 0;
	scanf("%d",&a);
	for(int i = --a;i!=-1;i--) {
		printf("%d\n",i);
	}
	return 0;
}
