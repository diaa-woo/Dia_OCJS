#include<stdio.h>

int main() {
	int arr[5] = {50,100,150,50,100};
	int length = sizeof(arr)/sizeof(arr[0]);
	int sum = 0;
	for(int i = 0; i<length-1; i++) {
		sum += arr[i]<arr[i+1];
	}
	printf("%d",sum);
	return 0;
}
