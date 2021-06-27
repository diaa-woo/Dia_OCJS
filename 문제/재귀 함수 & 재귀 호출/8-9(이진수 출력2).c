#include <stdio.h>
  void f(int n){
 	if (n == 0) return; //몫이 0이면 종료
    f(n/2); //n을 2로 나눈 몪을 값
    printf("%d",n%2);  //이진수 한자리씩 출력     
}

int main()
{   
    int n;
    scanf( "%d", &n );
    f(n);  
    return 0;
}

