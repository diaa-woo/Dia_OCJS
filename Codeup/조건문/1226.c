#include<stdio.h>

int main() {
	int a[16] = {0}, i =0, cnf = 8;
	for(i = 1; i<=7; i++) {
		scanf("%d",&a[i]);
	}
	for(i = 8; i<=13; i++) {
		scanf("%d",&a[i]);
	}
	for(i = 1; i<=6; i++) {
		for(int j = 1; j<=6;j++){		
			if(a[i] == a[j+7] ) cnf--;
		}
	}
	if(cnf == 3) {
	for(i = 1; i<=6; i++) {
		if(a[i+7] == a[7]) {
			cnf = 3;
			break;
		}
		else cnf = 4;
	}
	}
	if(cnf > 5) printf("0");
	else printf("%d",cnf-1);
	return 0;
}
