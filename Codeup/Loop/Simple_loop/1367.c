#include<stdio.h>

int main() {
	int h = 0,d = 0,k = 0;
	char dir = 0;
	scanf("%d %d %c",&h,&k,&dir);
	if(dir == 'R') d = h-1;
	for(int i = 1;i<=h;i++) {
		for(int j = 1; j<=d; j++) printf(" ");
		for(int g = 1; g<=k; g++) printf("*");
		printf("\n");
		if(dir == 'R') d -= 1;
		else d+=1;
	}
	return 0;
}
