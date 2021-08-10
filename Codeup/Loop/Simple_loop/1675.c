#include<stdio.h>

int main() {
	char a[200] = {0,};
	scanf("%[^\n]s",&a);
	for(int i = 0;a[i]!='\0';i++) {
		if(a[i] == ' ') {
			printf("%c",a[i]);
		}
		else if(a[i]<=99) {
			printf("%c",a[i]+23);
		}
		else printf("%c",a[i]-3);
	}
	return 0;
}
