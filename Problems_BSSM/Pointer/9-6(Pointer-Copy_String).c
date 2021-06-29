
#include <stdio.h>
void mystrcpy(char str2[], char str1[]) {
	int i = 0 ;
	while(*(str1+i)) {           //str1[i]이 '\0'이 아니면
	   *(str2+i)= *(str1+i);// (1)str1의 값을 str2값에 저장 str2[i] = str1[i] ;
	    i++;
	}
	*(str2+i) = '\0';  //'\0'문자를 입력하여 문자열의 끝을 지정
}

void mystrcpy2(int* str3, int* str1) {
	while(*str1) {   //str1[i]이 '\0'이 아니면
		*str3++ = *str1++; // (1)str1의 값을 str3값에 저장하고 인덱스 1증가
	}
	*str3 = '\0'; //'\0'문자를 입력하여 문자열의 끝을 지정
}

int main() {
	char str1[256],	str2[256], str3[256];
	gets(str1);

	mystrcpy(str2, str1);
	puts(str2);
	
	mystrcpy2(str3, str1);
	puts(str3);

	return 0;
}






