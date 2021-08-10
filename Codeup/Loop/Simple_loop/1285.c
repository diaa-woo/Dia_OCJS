#include<stdio.h>

int main() {
	int a[50] = {1,}, sum = 0,i;
	char b[50] = {0,};
	for(i = 0; 1; i++) {
		scanf("%d%c",&a[i],&b[i]);
		if(b[i]=='=') break;
	}
	for(int j = 0; 1; j++) {
		if(b[j] == '=') break;
		else if(b[j] == '+') {
			sum = a[j]+a[j+1];
			a[j+1] = sum;
		}	
		else if(b[j] == '-') {
			sum = a[j]-a[j+1];
			a[j+1] = sum;
		}
		else if(b[j] == '*') {
			sum = a[j]*a[j+1];
			a[j+1] = sum;
		}
		else if(b[j] == '/') {
			sum = a[j]/a[j+1];
			a[j+1] = sum;
		}
	}
	printf("%d",sum);
	return 0;
}
