#include <stdio.h>

int main()
{
	double height, weight, standard, bmi;

	scanf("%lf %lf", &height, &weight);

	standard = (height - 100) * 0.9;

	bmi = (weight - standard) * 100 / standard;

	if (bmi <= 10)
		printf("����");
	else if (bmi <=20)
		printf("��ü��");
	else
		printf("��");
	return 0;
}

