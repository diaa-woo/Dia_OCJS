#include <stdio.h>
int arr[10001][10001] = {};
int main() {
	int i,j,num = 0,count = 1;
	scanf("%d",&num);
	for(i = 1; i<=num; i++) {
		for(j=1;j<=num;j++) {
			arr[i][j] = count;
			count++;
		}
	}
	for(i = 1; i<=num; i++) {
		for(j=num;j>0;j--) {
			printf("%d ",arr[i][j]);
		}
		printf("\n");
	}
}

