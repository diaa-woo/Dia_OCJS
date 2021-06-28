#include <stdio.h>
int n;
int f(int n){
	int cnt = 0;
	for(int i = 1; i<=n;i++) {
		if(n%i==0) cnt++;
	}
	return cnt;
	//n값을 전달받아 1에서 n까지 약수의 개수를 구하는 부분을 작성하세요.
}
int main(){ 
  scanf("%d",&n);
  printf("%d\n", f(n));

}
