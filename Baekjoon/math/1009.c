#include <stdio.h>

int recursion(int root, int indices) {
    int result = 1;
    for(int i = 1; i<=indices; i++) {
        result = (result*root)%10;
    }
    return result == 0 ? 10 : result;
}

int main() {
    int n = 0, first = 0, second = 0, arr = 0;
    scanf("%d", &n);
    for(int i = 0; i<n; i++) {
        scanf("%d %d", &first, &second);
        arr = recursion(first, second);
        printf("%d\n", arr);
    }
    return 0;
}