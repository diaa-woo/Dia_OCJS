#include <stdio.h>
void print_char(char ch, int count);   
int main(void)
{
	char c = 0; int d = 0;
	scanf("%c %d", &c, &d);
  print_char(c,d);
                                        
	return 0;
}
void print_char(char ch, int count)     
{
	for(int i = 0; i<=count; i++) {
		printf("%c",ch);
	}
	
	
	
	
}
