
#include <stdio.h>
void mystrcpy(char str2[], char str1[]) {
	int i = 0 ;
	while(*(str1+i)) {           //str1[i]�� '\0'�� �ƴϸ�
	   *(str2+i)= *(str1+i);// (1)str1�� ���� str2���� ���� str2[i] = str1[i] ;
	    i++;
	}
	*(str2+i) = '\0';  //'\0'���ڸ� �Է��Ͽ� ���ڿ��� ���� ����
}

void mystrcpy2(int* str3, int* str1) {
	while(*str1) {   //str1[i]�� '\0'�� �ƴϸ�
		*str3++ = *str1++; // (1)str1�� ���� str3���� �����ϰ� �ε��� 1����
	}
	*str3 = '\0'; //'\0'���ڸ� �Է��Ͽ� ���ڿ��� ���� ����
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






