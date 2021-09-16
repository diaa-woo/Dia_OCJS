#include <stdio.h>
void inputArray( int a[], int size);
void outputArray( int a[], int size);
int insertArray( int a[], int num, int index, int size);
int deleteArray( int a[], int index, int size);
void decord(int a[],char mode2,int size);

int main(){
  int a[1000], size=0;
	char mode = 'i';
  printf("배열 도우미\n\n배열의 크기를 입력해주세요: ");
	scanf("%d",&size);
	printf("배열의 값들을 입력해주세요: ");
	inputArray(a,size);
	printf("원하시는 모드를 선택해주세요: ");
	decord(a,mode,size);
	outputArray(a,size);
  return 0;
}

void decord(int a[],char mode2,int size) {
	char restart = 0,mode3;
	mode3 = mode2;
	int num = 0,index = 0;
	if(mode3 == 'I' || mode3 == 'i') {
		printf("순서대로 삽입할 숫자, 삽입할 주소를 입력해주세요: ");
		scanf("%d %d",&num,&index);
		size = insertArray(a,num,index,size);
		printf("삽입이 완료되었습니다. 추가된 값: %d, 주소: %d\n계속하시겠습니까? (y/n) ",num,index);
		scanf("%c",&restart);
		if(restart = 'y') {
			printf("모드를 입력해주세요: ");
			scanf("%c",&mode3);
			decord(a,mode3,size);
			return;
		}
		else {
			printf("종료되었습니다.\n");
			return;
		}
	}
	else if(mode3 == 'o' || mode3 == 'O') {
		printf("순서대로 삭제할 주소값 입력해주세요: ");
		scanf("%d",&index);
		size = deleteArray(a,index,size);
		printf("삭제가 완료되었습니다. 주소: %d\n계속하시겠습니까? (y/n) ",index);
		scanf("%c",&restart);
		if(restart = 'y') {
			printf("모드를 입력해주세요: ");
			scanf("%c",&mode3);
			decord(a,mode3,size);
			return;
		}
		else {
			printf("종료되었습니다.\n");
			return;
		}
	}
	else {
		printf("오류\n");
	}
}

void inputArray( int a[], int size){
    int i;
    for( i = 0 ; i < size ; i++ ){
        scanf( "%d", &a[i] ) ;
    }
}
void outputArray( int a[], int size){
    int i;
    for( i = 0; i < size ; i ++ ){
        printf("%d ", a[i] ); 
    }
    printf("\n");
}
int insertArray( int a[], int num, int index, int size){
    if( index == size ){
        a[index] = num;
        size ++;
    } 
	  else{    // 여기에 배열 중간에 원소 삽입 코드
			for(int i = index; i<=size+1; i++) {
				a[i+1]=a[i];
			}
			a[index] = num;
			size++;
		}
  return size;
}
int deleteArray( int a[], int index, int size){
  if( index == size-1 ){
        a[index] = 0 ;
        size --;
    }
	else{ 
		a[index] = 0;
		for(int i = index; i<=size; i++) {
			a[i] = a[i+1];
		}
		size--;
	}
  return size;
}
