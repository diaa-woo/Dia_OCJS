#include<stdio.h>
#define SWAP(x,y,temp) ((temp) = (x),(x) = (y),(y) = (temp))

int bubble_sort(int list[],int n,int temp) {
	for(int i = 1; i<n; i++) {
		for(int j = 1; j<n; j++) {
			if(list[j] > list[j+1]) SWAP (list[j],list[j+1],temp);
		}
	}
	return n;
}

int main() {
	int list1[100001] = {0,}, list2[100001] = {0,},n,temp = 0,i,k = 0;
	scanf("%d",&n);
	for(int i = 1; i<=n; i++) {
		scanf("%d",&list1[i]);
		list2[i] = list1[i];
	}
	bubble_sort(list1,n,temp);
	for(i = 1; i<n; i++) {
		k=0;
		for(int j = 1; j<n; j++) {
			if(list2[j] > list2[j+1]) SWAP (list2[j],list2[j+1],temp);
		}
		for(int j = 1; j<=n;j++) {
			if(list1[j]!=list2[j]) break;
			else k++;
		}
		if(k==n) break;
	}
	printf("%d",i);
}
