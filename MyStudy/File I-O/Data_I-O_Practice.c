#include<stdio.h>
#define MAX_LENGTH 128

int main() {
	int num, line_count = 0;
	char buffer[MAX_LENGTH];
	FILE *p_file = NULL;
	
	scanf("%d",&num);
	if(0==fopen_s(&p_file, "data.txt", "rt")) {
		while(fgets(buffer, MAX_LENGTH, p_file)!= NULL) {
			line_count++;
			if(line_count == num) {
				printf("%d¹øÂ° ÁÙ = %s", line_count, buffer);
				break;
			}
		}
		fclose(p_file);
	}
	
	return 0;
}
