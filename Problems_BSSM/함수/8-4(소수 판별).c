#include <stdio.h>

void f(int a) {
	int i;
	for(i=4;i<a;i++) {
		if(a%i==0) {
			printf("composite");
			return;
		}
		}
		printf("prime");
		return;
}


int main(){
	int n;
  scanf("%d", &n);
  f(n);
  return 0;
}
