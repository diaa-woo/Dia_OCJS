#include <stdio.h>

int main() {
	int black[6] = {0,};
	for(int i = 0; i<6; i++) {
		scanf("%d", &black[i]);
	}
	for(int i = 0; i<6; i++) {
		switch(i) {
			case 0: case 1:
				printf("%d ", 1 - black[i]);
				break;
			case 2: case 3: case 4:
				printf("%d ", 2 - black[i]);
				break;
			case 5: 
				printf("%d", 8 - black[i]);
				break;
		}
	}
	return 0;
}
