#include <stdio.h>
#include <stdlib.h>
int maxh(int* height, int n) {
	int i ;
	int maxn = *height ; //(1)ó�� �ԷµǴ� ���� maxn�� ����
	for(i=1; i<n; i++) {
		if (*(height+i) > maxn) maxn = *(height+i); //(2)ū�� ���Ͽ� ū���� maxn ����
	}
	return maxn;
}
int main(){
    int n ;
    int* height;
    int i ;
	printf("ó���� �ο��� : ") ;
	scanf("%d", &n) ;
	height = (int*)malloc(sizeof(int)*n) ; //(3)height�� nũ�� ��ŭ ���� Ȯ��
	//height = (int*)calloc(n, sizeof(int)) ; 
	
	printf("%d���� Ű�� �Է��ϼ���.\n", n) ;
	for(i=0; i<n; i++) {
		scanf("%d", (height+i)) ; //(4) height ������ ������ �� �Է� 
	}
	printf("�ִ밪 : %d\n",maxh(height,n)); //(5) maxh�Լ� ȣ�� ���ϰ� ���
	
	free(height);
    return 0; 
}
