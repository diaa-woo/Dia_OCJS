#include <stdio.h>
#include <stdlib.h>
int maxh(int* height, int n) {
	int i ;
	int maxn = *height ; //(1)처음 입력되는 값을 maxn에 저장
	for(i=1; i<n; i++) {
		if (*(height+i) > maxn) maxn = *(height+i); //(2)큰값 비교하여 큰값을 maxn 저장
	}
	return maxn;
}
int main(){
    int n ;
    int* height;
    int i ;
	printf("처리할 인원수 : ") ;
	scanf("%d", &n) ;
	height = (int*)malloc(sizeof(int)*n) ; //(3)height에 n크기 만큼 공간 확보
	//height = (int*)calloc(n, sizeof(int)) ; 
	
	printf("%d명의 키를 입력하세요.\n", n) ;
	for(i=0; i<n; i++) {
		scanf("%d", (height+i)) ; //(4) height 포인터 변수에 값 입력 
	}
	printf("최대값 : %d\n",maxh(height,n)); //(5) maxh함수 호출 리턴값 출력
	
	free(height);
    return 0; 
}
