#include <stdio.h>
int main() {
	int i,j,temp,n,com[n];
	scanf("%d", &n);
	//1.com�迭�� n���� ������ �Է¹޾� ����
	for(i=1;i<=n;i++){
		scanf("%d",&com[i]);
	}
	//2. �迭�� 1~n��° �ݺ�
	for(i=1;i<=n;i++){  
		printf("%d: ",i);
		for(j=1;j<=n;j++){// (1)
			if(i==j)//com[i]�� com[j]�� ������
				continue; //(1)������ ���ư� ����(j<=n) üũ �� j�� 1����
			if (com[i] > com[j])
				printf("> ");
			else if (com[i] < com[j])
				printf("< ");
			else
				printf("= ");
		}
		printf("\n");
	}
	return 0;
}


