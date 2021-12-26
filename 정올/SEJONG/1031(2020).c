#include<stdio.h>

int main() {
	int count = 0, count1 = 0, n1 = 0, n2 = 0, buf1[17] = {0,}, buf2[17] = {0,}, bit1[17] = {0,}, bit2[17] = {0,},check;	
	scanf("%d %d", &n1, &n2);
	for(count = 0; ; count++) {
		buf1[count] = n1%2;
		n1 /= 2;
		if(n1 == 1) {
			count++;
			buf1[count] = 1;
			break;
		}
		else if(n1 == 0) {
			count++;
			buf1[count] = 0;
			break;
		}
	}
	for(count1 = 0; ; count1++) {
		buf2[count1] = n2%2;
		n2 /= 2;
		if(n2 == 1) {
			count1++;
			buf2[count1] = 1;
			break;
		}
		else if(n2 == 0) {
			count1++;
			buf2[count1] = 0;
			break;
		}
	}
	if(count>count1) {
		while()
	}
	for(int i = count, check = 0; check<=i; i--,check++) {
		bit1[check] = buf1[i];
	}
	for(int i = count1, check = 0; check<=i; i--,check++) {
		bit2[check] = buf2[i];
	}
	for(int i = 0; i<=count; i++) {
		printf("%d",bit1[i]);
	}
	printf("\n");
	for(int i = 0; i<=count1; i++) {
		printf("%d",bit2[i]);
	}
}
