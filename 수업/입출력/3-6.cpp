#include<stdio.h>

int main() {
	char a[21] = {};
	scanf("%s",&a);
	for(int n = 0; n<=21;n++) {
		if(a[n]=='\0') {
			break;
		}
		printf("\'%c\'\n",a[n]);
	}
	return 0;
}
