#include<stdio.h> 

int main() {
	int a = 0,b = 0,c = 0,d = 0,state = 0;
	scanf("%d %d %d %d",&a,&b,&c,&d);
	state = a+b+c+d;
	if(state==1) printf("��");
	else if(state==2) printf("��");
	else if(state==3) printf("��");
	else if(state==4) printf("��");
	else printf("��");
	return 0; 
}
