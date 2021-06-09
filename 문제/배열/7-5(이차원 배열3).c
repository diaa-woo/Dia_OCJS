#include<stdio.h>
int arr[201][201]={0};
int main(){
	int i,j,k,n,m,num=1;
	scanf("%d %d",&n, &m);
	k=2;//a[1][1]의 값은 2이므로 2부터 시작
   	for(k=2;k<=n+m;k++){
		for(j=1;j<=m;j++){
			for(i=1;i<=n;i++){
				if(i+j ==k) {
					arr[i][j]=num;
		// 	printf("%d,%d)=%d\n",i,j,arr[i][j]);
					num++;
				}
			}
		}
	}
	//배열출력
	for(i=1;i<=n;i++){
		for(j=1;j<=m;j++){
			printf("%d ",arr[i][j]);
		}
		printf("\n");
				
	}	
	return 0;
}

