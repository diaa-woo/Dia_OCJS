#include<stdio.h>

int main() {
	int a = 1, b = 2, c = 3, d = 4,first = 0, second = 0, third = 0, forth = 0, fifth = 0, sixth = 0;
	first = b*=a>b?a:b;
	a = 1, b = 2, c = 3, d = 4;
	second = c-= a<b ? a-b : b-a;
	a = 1, b = 2, c = 3, d = 4;
	third = d %= c<d ? c++:d++;
	a = 1, b = 2, c = 3, d = 4;
	forth = c += b<b ? ++a:b++;
	a = 1, b = 2, c = 3, d = 4;
	fifth = d= / d%3 ? a*b : d%c;
	a = 1, b = 2, c = 3, d = 4;
	sixth = a += ++a % b++ ? c*d : b/c;
	a = 1, b = 2, c = 3, d = 4;
	printf("%d\n%d\n%d\n%d\n%d\n%d\n%d\n%d\n",first,second,third,forth,fifth,sixth);
	return 0;
}

