#include<stdio.h>

int reverse(int a) {
	int buf = 0, count = 1,buf2 = 0,num = 0,k = 1;
	buf2 = a;
	for(int i = 0; ; i++) {
		if(buf2<10) break;
		count++;
		buf2 /= 10;
	}
	buf2 = a;
	for(int j = count; j>=1; j--) {
		buf = buf2%10;
		for(int i = 1; i<j; i++) {
			k*=10;
		}
		num += buf*k;
		k = 1;
		buf2/=10;
	}
	return num + a;
}

int main() {
	int num = 0,buf = 0,count = 1,buf3[100] = {0,};
	long long int sum = 0;
	scanf("%d",&sum);
	if(sum < 10) {
		printf("%d %d",0, sum);
		return 0;
	}
	for(int i = 1; ; i++) {
		sum = reverse(sum);
		buf = sum;
		count = 0;
		for(int j = 0; ; j++) {
			buf3[j] = buf%10;
			count++;
			if(buf<10) break;
			buf /= 10;
		}
		for(int j = 0; ;j++) {
			if(j >= count-(j+1)) {
				printf("%d %lld",i,sum);
				return 0;
			}
			else if(buf3[j] == buf3[count-(j+1)]) continue;
			else break;
		}
}
}
