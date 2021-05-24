# include <stdio.h>

int main()
{
	int a,b,c;
	int height= 170;
	
	scanf("%d %d %d",&a,&b,&c); 
	
	if(a <= height)
		printf("CRASH %d",a);
	else if(b <= height)
		printf("CRASH %d",b);
	else if(c <= height)
		printf("CRASH %d",c);
	else
		printf("PASS");
	
	
	return 0;
	
}
