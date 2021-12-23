#include<stdio.h>

int main() {
	int a = 0,num = 0,k = 1,buf = 0,count = 1;
	scanf("%d",&a);
	buf = a;
	for(int i = 0; ; i++) {
		if(buf<10) break;
		count++;
		buf /= 10;
	}
	for(int j = count; j>=1; j--) {
		buf = a%10;
		for(int i = 1; i<j; i++) {
			k*=10;
		}
		num += buf*k;
		k = 1;
		a/=10;
	}
	
	printf("%d",num);
	
	
}
