#include<stdio.h>

int main() {
	double a , b = 0,c = 0,d = 0;
	scanf("%lf lf",&a,&b);
	c = (a-100) * 0.9;
	printf("%lf\n",c);
	d = (b - c) * 100 / c;
	printf("%lf\n",d);
	if(d<=10) printf("����");
	else if(d>20) printf("��");
	else printf("��ü��"); 
	return 0;
}
