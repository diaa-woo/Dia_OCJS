#include<stdio.h>

int main() {
	int hours = 0, minutes = 0;
	scanf("%d %d",&hours, &minutes);
	if(minutes - 30 < 0) {
		if(hours == 0) hours = 24;
		printf("%d %d", hours -1, (minutes - 30) + 60);
}
	else printf("%d %d", hours, minutes - 30);
	return 0;
}
