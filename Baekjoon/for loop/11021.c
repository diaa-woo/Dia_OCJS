#include <stdio.h>

int main() {
    int n = 0, first = 0, second = 0;
    scanf("%d", &n);
    for(int i = 1; i<=n; i++) {
        scanf("%d %d", &first, &second);
        printf("Case #%d: %d\n", i, first+second);
    }
    return 0;
}