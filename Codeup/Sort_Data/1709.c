#include<stdio.h>
#define SWAP(x,y,temp) ((temp)=(x), (x)= (y), (y)= (temp))

void main() {
	int list[10001] ={0,},n,temp = 0;
	scanf("%d",&n);
	for(int i = 0; i<n; i++) {
		scanf("%d",&list[i]);
	}
	for(int i = 0; i<n; i++) {
		for(int j = 0; j<n; j++) {
			if(list[j]<list[j+1]) {
				SWAP(list[j],list[j+1],temp);
			}
		}
	}
	for(int i = 0; i<n; i++) {
		printf("%d ",list[i]);
	}
}
