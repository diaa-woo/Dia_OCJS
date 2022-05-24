#include <stdio.h>

long long sum(int *a, int n) {
    long long int sum = 0;
    for(int i = 0; i<n; i++) {
        sum += a[i];
    }
    return sum;
}

int main() {
    int arr[50] = {0,}, n;
    scanf("%d",&n);
    for(int i = 0; i<n; i++) {
        scanf("%d", &arr[i]);
    }
    printf("%lld", sum(arr, n));
    return 0;
}