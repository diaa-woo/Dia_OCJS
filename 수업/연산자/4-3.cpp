#include<stdio.h>

int main() {
	bool b1 = false;
	bool b2 = true;
	if(b1) {
		printf("b1 = Âü\n");
	}
	else{
		printf("b2 = °ÅÁş\n");
	}
	if(!b2) {
		printf("b2 = °ÅÁş\n");
	}
	else {
		printf("b2 = Âü\n");
	}
	return 0;
}
