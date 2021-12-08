#include<stdio.h>
#include<stdlib.h>

int main() {
	int n = 0,j = 0,k = 0;
	int *a = 0;
	scanf("%d",&n);
	a = calloc(n,sizeof(int));
	for(int i = 0; i<n; i++) {
		scanf("%d",&a[i]);
	}
	while(j!=n || k!=2) {
		printf("%d\n",a[j]);
		j++;
		if(j == n-1)  {
			k++;
			j = 0;
		}
	}
	return 0;
}
