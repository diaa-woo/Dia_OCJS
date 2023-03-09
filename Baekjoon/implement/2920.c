#include <stdio.h>

int main() {
	int status = 0, a;
	for(int i = 1; i<=8; i++) {
		scanf("%d", &a);
		if(status == 0) {
			if(a == i) {
				status = 1;
				continue;
			}
			else if(a == 8) {
				status = 2;
				continue;
			}
			else {
				status = 3;
				break;
			}
		}
		else if(status == 1) {
			if(a != i) {
				status = 3;
				break;
			}
		}
		else if(status == 2) {
			if(a != 9-i) {
				status = 3;
				break;
			}
		}
	}
	switch(status) {
		case 1:
			printf("ascending");
			break;
		case 2:
			printf("descending");
			break;
		case 3:
			printf("mixed");
			break;
	}
	return 0;
}
