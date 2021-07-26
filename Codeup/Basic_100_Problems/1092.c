#include<stdio.h>

int main() {
	int a = 0, b = 0, c = 0,i,ac = 0, bc = 0, cc = 0;
	scanf("%d %d %d",&a,&b,&c);
	for(i = 1;i!=-1;i++) {
		if(i%a==0) {
			ac = 1;
		}
		else {
			ac = 0;
		}
		if(i%b==0) {
			bc = 1;
		}
		else {
			bc = 0;
		}
		if(i%c==0) {
			cc = 1;
		}
		else {
			cc = 0;
		}
		if(ac == 1 && bc == 1 && cc == 1) {
			break;
		}
	}
	printf("%d",i);
}
