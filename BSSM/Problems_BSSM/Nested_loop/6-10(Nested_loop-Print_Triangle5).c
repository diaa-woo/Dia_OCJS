#include<stdio.h> //Dev C++에서 작성후 복붙하였습니다...

int main() {
	int n,j,i;
	scanf("%d",&n);
	for(i=0;i<n/2+1;i++) {
		for(j=0;j <n/2-i;j++) {
			printf(" ");
		}
		for(j = 0; j<i*2+1;j++) {
			printf("*");
		}
		printf("\n");
	}
	return 0;
}
