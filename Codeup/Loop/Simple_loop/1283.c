#include<stdio.h>

void main() {
	int a = 0, b = 0, per = 0;
	float sum = 0;
	scanf("%d",&a);
	sum = a;
	scanf("%d",&b);
	for(int i = 0; i<b;i++) {
		scanf("%d",&per);
		sum += sum/100*per;
	}
	printf("%.0f\n",sum-a);
	if(sum>a) printf("good");
	else if(sum == a) printf("same");
	else printf("bad");
}
