#include <stdio.h>
int main() {
	int i,j,temp,n,com[n];
	scanf("%d", &n);
	//1.com배열에 n개의 변수를 입력받아 저장
	for(i=1;i<=n;i++){
		scanf("%d",&com[i]);
	}
	//2. 배열을 1~n번째 반복
	for(i=1;i<=n;i++){  
		printf("%d: ",i);
		for(j=1;j<=n;j++){// (1)
			if(i==j)//com[i]와 com[j]가 같으면
				continue; //(1)번으로 돌아감 조건(j<=n) 체크 후 j만 1증가
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


