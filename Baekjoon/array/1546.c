#include <stdio.h>

int main() {
    int n = 0,  max = 0;
    float result = 0, arr[1000] ={0,};
    scanf("%d", &n);
    scanf("%f", &arr[0]);
    max = arr[0];
    for(int i = 1; i<n; i++) {
        scanf("%f", &arr[i]);
        if(arr[i] > max) max = arr[i];
    }
    for(int i = 0; i < n; i++) {
        result += ((arr[i]/max) *100);
        //printf("%f\n", result);
    }
    printf("%f", result/n);
    return 0;
}