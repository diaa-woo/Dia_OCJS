#include <stdio.h>
void inputArray( int a[], int size);
void outputArray( int a[], int size);
int insertArray( int a[], int num, int index, int size);
int deleteArray( int a[], int index, int size);
void decord(int a[],char mode2,int size);

int main(){
  int a[1000], size=0;
	char mode = 'i';
  printf("�迭 �����\n\n�迭�� ũ�⸦ �Է����ּ���: ");
	scanf("%d",&size);
	printf("�迭�� ������ �Է����ּ���: ");
	inputArray(a,size);
	printf("���Ͻô� ��带 �������ּ���: ");
	decord(a,mode,size);
	outputArray(a,size);
  return 0;
}

void decord(int a[],char mode2,int size) {
	char restart = 0,mode3;
	mode3 = mode2;
	int num = 0,index = 0;
	if(mode3 == 'I' || mode3 == 'i') {
		printf("������� ������ ����, ������ �ּҸ� �Է����ּ���: ");
		scanf("%d %d",&num,&index);
		size = insertArray(a,num,index,size);
		printf("������ �Ϸ�Ǿ����ϴ�. �߰��� ��: %d, �ּ�: %d\n����Ͻðڽ��ϱ�? (y/n) ",num,index);
		scanf("%c",&restart);
		if(restart = 'y') {
			printf("��带 �Է����ּ���: ");
			scanf("%c",&mode3);
			decord(a,mode3,size);
			return;
		}
		else {
			printf("����Ǿ����ϴ�.\n");
			return;
		}
	}
	else if(mode3 == 'o' || mode3 == 'O') {
		printf("������� ������ �ּҰ� �Է����ּ���: ");
		scanf("%d",&index);
		size = deleteArray(a,index,size);
		printf("������ �Ϸ�Ǿ����ϴ�. �ּ�: %d\n����Ͻðڽ��ϱ�? (y/n) ",index);
		scanf("%c",&restart);
		if(restart = 'y') {
			printf("��带 �Է����ּ���: ");
			scanf("%c",&mode3);
			decord(a,mode3,size);
			return;
		}
		else {
			printf("����Ǿ����ϴ�.\n");
			return;
		}
	}
	else {
		printf("����\n");
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
	  else{    // ���⿡ �迭 �߰��� ���� ���� �ڵ�
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
