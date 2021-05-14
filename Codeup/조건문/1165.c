#include<stdio.h>

int main() {
	int time = 0, score =0, finalScore = 0;
	scanf("%d %d", &time, &score);
	finalScore = (90-time) / 5 + 1;
	if((90-time) % 5 == 0) finalScore--;
	printf("%d", score + finalScore);
	return 0;
}
