#include<stdio.h>

int main() {
	char a[300] = {0,};
	scanf("%[^\n]s",&a);
	for(int i = 0; a[i]!='\0'; i++) {
		if((a[i]>=32 && a[i]<=64)||(a[i]>=91 && a[i]<=96)||(a[i]>=123 && a[i]<=126)) printf("%c",a[i]);
		else if(a[i]>=65 && a[i]<=90) printf("%c",a[i]+32);
		else if(a[i]>=97 && a[i]<=122) printf("%c",a[i]-32);
		
	}
	return 0;
}
