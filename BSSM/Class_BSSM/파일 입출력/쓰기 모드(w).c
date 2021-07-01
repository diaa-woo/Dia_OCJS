#include<stdio.h>

main() {
	FILE *fp1 = fopen("out.txt","w");
	fprintf(fp1,"%d\n", 7);
	fclose(fp1);
	
}
