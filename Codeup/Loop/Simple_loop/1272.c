#include<stdio.h>

int main() {
	int a = 0, b = 0,count = 0,ac = 0, bc = 0;
	scanf("%d %d",&a,&b);
	if(a>b) {
		for(int i = 1;i<=a;i++) {
			if(i%2==0) {
				count *= 10;
			}
			else {
				count = count/10 + 1;
			}
			if(i==b) {
				bc = count;
			}
			
		}
		ac = count;
	}
	else {
		for(int i = 1;i<=b;i++) {
			if(i%2==0) {
				count *= 10;
			}
			else {
				count = count/10 + 1;
			}
			if(i==a) {
				ac = count;
			}
		}
		bc = count;
	}
	printf("%d",ac+bc);
	return 0;
}
