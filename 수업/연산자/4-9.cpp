#include<stdio.h>

int main() {
	int h = 0, m = 0;
	scanf("%d %d",&h,&m); 
	h = h+24;
	m= m+h*60;
	m = m- 30;
	printf("%d %d", (m/60)%24,m%60);
}

