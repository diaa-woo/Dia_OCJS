#include <stdio.h>

int main() {
    int n1 = 0, n2 = 0, arr[1000] = {0,};
    float result = 0, sum=0, buf=0, count;
    scanf("%d", &n1);
    for(int i = 0; i<n1; i++) {
        scanf("%d", &n2);
        for(int j = 0; j<n2; j++) {
            scanf("%d", &arr[j]);
            sum += arr[j];
        }
        buf = sum/n2;
        for(int j = 0; j<n2; j++) {
            if(arr[j] > buf) count+=1;
        }
        //printf("%f %f %f\n", sum, buf, count);
        result = (count / n2)*100;
        printf("%.3f%%\n", result);
        sum = 0;
        buf = 0;
        count = 0;
    }
    return 0;
}