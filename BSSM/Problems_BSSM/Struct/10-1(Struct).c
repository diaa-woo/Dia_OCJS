#include <stdio.h>

struct Student{
	int Number;
	int computerScore;
	int mathScore;
	int Sum;
	float Average;
};

int main() {
	struct Student s[100];
	int n = 0;
	scanf("%d",&n);
	for(int i = 0; i<n; i++) {
		scanf("%d %d %d",&s[i].Number,&s[i].computerScore,&s[i].mathScore);
	}
	for(int j = 0; j<n; j++) {
		s[j].Sum = s[j].computerScore + s[j].mathScore;
		s[j].Average = s[j].Sum / 2.0;
		printf("%04d %d %.1f\n",s[j].Number,s[j].Sum,s[j].Average);
	}
	return 0;
}

