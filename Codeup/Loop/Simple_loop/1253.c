#include<stdio.h>

int main() {
	int n = 0,m = 0;
	scanf("%d %d",&n,&m);
	if(n>m) {
		for(int i = m; i<=n; i++) {
		printf("%d ",i);
	}
	}
	else {
		for(int i = n; i<=m; i++) {
		printf("%d ",i);
		}
	}
	return 0;
	
}
