#include <stdio.h>
#include <string.h>

struct student {
	int id;
	char name[10];
	double score;
}class1[30];

main() {
	class1[0].id = 1316;
	strcpy(class1[0].name, "diadntjr");
	class1[0].score = 100.0;
	class1[1].id = 1314;
	strcpy(class1[1].name, "d3spel");
	class1[1].score = 50.0;
	class1[2].id = 1313;
	strcpy(class1[2].name, "over");
	class1[2].score = 85.2;
	printf("%d %s %.1lf\n",class1[0].id,class1[0].name,class1[0].score);
	printf("%d %s %.1lf\n",class1[1].id,class1[1].name,class1[1].score);
	printf("%d %s %.1lf\n",class1[2].id,class1[2].name,class1[2].score);
}
