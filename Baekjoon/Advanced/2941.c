#include <stdio.h>

int main() {
	int count = 0, i = 0;
	char string[101] = {0,};
	scanf("%s", string);
	while(string[i] != '\0') {
		switch(string[i]) {
			case 'c':
				if(string[i+1] == '=' || string[i+1] == '-') {
					count++;
					i += 1;
				}
				else
					count++;
				break;
			case 'd':
				if(string[i+1] == '-') {
					count++;
					i += 1;
				}
				else if(string[i+1] == 'z' && string[i+2] == '=') {
					count++;
					i += 2;
				}
				else 
					count++;
				break;
			case 'l':
				if(string[i+1] == 'j') {
					count++;
					i += 1;
				}
				else
					count++;
				break;
			case 'n':
				if(string[i+1] == 'j') {
					count++;
					i += 1;
				}
				else
					count++;
				break;
			case 's':
				if(string[i+1] == '=') {
					count++;
					i += 1;
				}
				else 
					count++;
				break;
			case 'z':
				if(string[i+1] == '=') {
					count++;
					i += 1;
				}
				else 
					count++;
				break;
			default:
				count++;
				break;
		}
		i++;
	}
	printf("%d", count);
	return 0;
	
}
