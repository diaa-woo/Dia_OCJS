#include <stdio.h>
#include <stdlib.h>
 int main(){
    int a,b,i;
    char* str = (char*)malloc(100); 
    scanf("%s",str);
    scanf("%d %d",&a,&b);
    for(i = a-1; i<b; i++) {
			printf("%c",*(str+i));
		}
    return 0;
}

