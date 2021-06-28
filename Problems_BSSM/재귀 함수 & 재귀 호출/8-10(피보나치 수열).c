#include <stdio.h>
int a[201];
int f(int n){   
  if(a[n]!=0) return a[n];
	if(n<=2) return 1;
	return a[n] = (f(n-1) + f(n-2)) % 10009;
}
int main()
{   
	int n;
    scanf("%d", &n);
    printf("%d", f(n));
    return 0;
}
