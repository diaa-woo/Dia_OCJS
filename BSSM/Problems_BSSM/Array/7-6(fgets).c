#include<stdio.h>

int main() {
char a[101];
int i = 0;
fgets(a,101,stdin);
for(i = 0;a[i]!='\0';i++) {
	if(a[i]==' ')
		;
	else printf("%c",a[i]);

}
		return 0;
}