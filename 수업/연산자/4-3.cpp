#include<stdio.h>

int main() {
	bool b1 = false;
	bool b2 = true;
	if(b1) {
		printf("b1 = ��\n");
	}
	else{
		printf("b2 = ����\n");
	}
	if(!b2) {
		printf("b2 = ����\n");
	}
	else {
		printf("b2 = ��\n");
	}
	return 0;
}
