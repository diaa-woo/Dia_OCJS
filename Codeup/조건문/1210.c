#include<stdio.h>

int main() {
	int a = 0,b = 0,cheeseBurger = 400, vegetablesBurger = 340, milk = 170, sunnySideFried = 100, salad = 70;
	scanf("%d %d",&a ,&b);
	switch(a) {
		case 1:
			a = cheeseBurger;
			break;
		case 2:
			a = vegetablesBurger;
			break;
		case 3:
			a = milk;
			break;
		case 4:
			a = sunnySideFried;
			break;
		case 5:
			a = salad;
			break;
	}
	switch(b) {
		case 1:
			b = cheeseBurger;
			break;
		case 2:
			b = vegetablesBurger;
			break;
		case 3:
			b = milk;
			break;
		case 4:
			b = sunnySideFried;
			break;
		case 5:
			b = salad;
			break;
	}	
	if((a+b)>500) printf("angry");
	else printf("no angry");
	return 0;
}
