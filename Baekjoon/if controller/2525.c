#include <stdio.h>

int main() {
	int h = 0, m = 0, time = 0;
	scanf("%d %d %d",&h,&m,&time);
	if(m+time >= 60) {
		if(h+((m+time)/60) >= 24) printf("%d %d", h-24+((m+time)/60), ((m+time)-((m+time)/60)*60));
		else printf("%d %d", h+((m+time)/60), ((m+time)-((m+time)/60)*60));
	}
	else printf("%d %d", h, m+time);
	return 0; 
}
