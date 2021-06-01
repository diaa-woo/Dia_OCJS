#include<stdio.h>
int arr[10001][10001] ={0,};

int main() {
	int i = 0, j = 0, num = 1,n = 0;
	scanf("%d",&n);
	for(i=1;i<=n;i++) {
	if(i%2!=0) {
		for(j=1;j<=n;j++) {
			arr[i][j]=num;
			num++;
		}
	}
	if(i%2==0) {
		for(j=n;j>=1;j--) {
			arr[i][j]=num;
			num++;
		}
	}
}
	for(i=1;i<=n;i++) {
	if(i%2!=0) {
		for(j=1;j<=n;j++) {
			printf("%d ",arr[i][j]);
		}
		printf("\n");
	}

	if(i%2==0) {
		for(j=1;j<=n;j++) {
			printf("%d ",arr[i][j]);
		}
		printf("\n");
	}
}
}
