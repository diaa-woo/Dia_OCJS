#include<stdio.h>

int main() {
	int a = 2, b = 3, c = 4, d = 5,first = 0, second = 0, third = 0, forth = 0, fifth = 0, sixth = 0,seventh = 0, eighth;
	first = ++a + ++a;
	a = 2, b = 3, c = 4, d = 5;
	second = b++ - --c;
	a = 2, b = 3, c = 4, d = 5;
	third = ++b/b++;
	a = 2, b = 3, c = 4, d = 5;
	forth = 10 % c++;
	a = 2, b = 3, c = 4, d = 5;
	fifth = ++c + c++ + c++;
	a = 2, b = 3, c = 4, d = 5;
	sixth = 10 + ++a;
	a = 2, b = 3, c = 4, d = 5;
	seventh = 10 - --d;
	a = 2, b = 3, c = 4, d = 5;
	eighth = ++a * b++; 
	printf("%d\n%d\n%d\n%d\n%d\n%d\n%d\n%d\n",first,second,third,forth,fifth,sixth,seventh,eighth);
	return 0;
}
