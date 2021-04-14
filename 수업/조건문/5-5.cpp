#include<stdio.h>

int main() {
	int A = 0, B = 0, C = 0, MAX = 0;
	scanf("%d %d %d", &A, &B, &C);
	if(A!=0&&B!=0&&C!=0) {
		MAX = ((A > B) && (A > C)) ? A : ((B > A) && (B > C)) ? B : C;
		printf("%d\n", MAX);
		if(C==MAX) {
			C = MAX;
			if(C<=A+B) {
			printf("YES");
		}
		else {
			printf("NO");
		}
		}
		else if(B==MAX) {
			B = MAX; 
			if(B<=A+C) {
			printf("YES");
		}
		else {
			printf("NO");
	}
	}
		else {
			A = MAX;
			if(A<=B+C)
			printf("YES");
			else {
			printf("NO");
		}		
	}	
	
	}
	else {
		printf("Error!");
	}
	return 0;
	
}
