#include <stdio.h>

int main() {
    int n = 0, sum = 0, count = 0;
    char arr[80]= {0,};
    scanf("%d",&n);
    for(int i = 0; i<n; i++) {
        scanf("%s", &arr);
        for(int j = 0; arr[j]!='\0'; j++) {
            if(arr[j]=='O') {
                count++;
                sum += count;
            }
            else count = 0;
        }
        printf("%d\n", sum);
        count = 0;
        sum = 0;
    }
    return 0;
}