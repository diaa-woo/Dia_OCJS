#include<stdio.h>

int main() {
	int year = 0, months = 0, days = 0;
	scanf("%d.%d.%d",&year,&months,&days);
	printf("%4d.%02d.%02d",year,months,days);
	return 0;
}
