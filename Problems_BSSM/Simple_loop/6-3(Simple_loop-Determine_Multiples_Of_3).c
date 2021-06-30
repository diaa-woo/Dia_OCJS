#include<stdio.h>

int main() {
	char arr[1000];
	int i, sum = 0;
	scanf("%s",arr);
	for(i = 0;i<strlen(arr);i++) {
		sum += arr[i]-'0';
	}
	printf("%d",sum%3?0:1);
	return 0;
}
