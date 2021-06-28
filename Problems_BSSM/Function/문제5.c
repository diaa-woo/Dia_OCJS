//사용자 정의 함수를 스스로 작성합니다. 

#include <stdio.h>
// 사용자 정의 함수 선언
bool f(int y) // 반환값이 윤년(True), 평년(False) 두값 뿐이므로 bool
{
	if(y%400==0 || (y%4==0 && y%100!=0)) return true;
	else return false;
}
// main() 함수 
int main() {
	int year = 0;
	scanf("%d", &year);
	if(f(year)==true) {
		printf("윤년");
	}
	else printf("평년");
	
	return 0;
}
