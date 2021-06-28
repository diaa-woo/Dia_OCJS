#include <stdio.h>
long long int n = 0;
long long int sqrt(int n) {
	int i=0,s=0;
	for(i<=0;i<=n;i++) {
		if(i*i>n) break;
		else  {
			s = i;
		}
	}
	return s;
}
int main() {
	scanf("%lld",&n);
	printf("%lld\n",sqrt(n));
	return 0;
}
