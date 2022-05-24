#include <stdio.h>

int main() {
    int arr1[10] = {0,}, arr2[10] = {0,}, count = 0,j = 0;
    for(int i = 0; i<10; i++) {
        scanf("%d",&arr1[i]);
        arr1[i] %=42;
    }
    for(int i = 0; i<10; i++) {
        for(j = 0; j<count; j++) {
            //printf("%d %d\n",arr1[i],arr2[j]);
            if(arr1[i]==arr2[j]) {
                //printf("break\n");
                break;
            };
        }
        if(j==count) {
            arr2[j] = arr1[i];
            count++;
            //printf("check, arr1: %d arr2: %d, count: %d\n",arr1[i], arr2[j], count);
        }
    }
    printf("%d",count);
    return 0;
}

