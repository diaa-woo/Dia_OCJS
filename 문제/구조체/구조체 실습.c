#include <stdio.h>

typedef struct
{
	char name[100];
	int kor; // 국어
	int eng; // 영어
	int math; // 수학
	float avg; // 평균
} Student;

int main()
{
	Student class3[3];
	
	for(int i=0; i<3; i++)
	{
		scanf("%s",&class3[i].name);
		scanf("%d",&class3[i].kor);
		scanf("%d",&class3[i].eng);
		scanf("%d",&class3[i].math);
		class3[i].avg = (class3[i].kor+class3[i].math+class3[i].eng)/3.0;
	}

	for(int i=0; i<3; i++)
	{
		printf("%s ",class3[i].name);
		printf("%.1f\n",class3[i].avg);
	}
	
	return 0;
}
