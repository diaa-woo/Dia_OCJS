
#include <stdio.h>

int f(int n) {
	int i,sum=0;
	for(i=n;i>=1;i--){
    sum = sum + i;	
 }
	return sum;
}

int main (){
   int n;
   scanf("%d", &n);
   printf("%d", f(n));
   return 0;

}
