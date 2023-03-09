#include <stdio.h>

int main() {
	char string[51] = {0,}, grade[2] = {0,0};
	float credit = 0, average = 0, creditTotal = 0, majorTotal = 0, gradeAVR = 0;
	for(int i = 0; i<20; i++) {
		scanf("%s %f %s", string, &credit, grade);
		creditTotal += credit;
		switch(grade[0]) {
			case 'A':
				if(grade[1] == '+') {
					gradeAVR = 4.5f;
				}
				else {
					gradeAVR = 4.0f;
				}
				break;
			case 'B':
				if(grade[1] == '+') {
					gradeAVR = 3.5f;
				}
				else {
					gradeAVR = 3.0f;
				}
				break;
			case 'C':
				if(grade[1] == '+') {
					gradeAVR = 2.5f;
				}
				else {
					gradeAVR = 2.0f;
				}
				break;
			case 'D':
				if(grade[1] == '+') {
					gradeAVR = 1.5f;
				}
				else {
					gradeAVR = 1.0f;
				}
				break;
			case 'F': 
				gradeAVR = 0;
				break;
			case 'P':
				creditTotal -= credit;
				gradeAVR = 0;
				break;
		}
		majorTotal += gradeAVR * credit;
	}
	printf("%f", majorTotal/creditTotal);
	return 0;
}
