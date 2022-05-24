#include <stdio.h>

int buf = 0;
int arr[10000] = {1,};

int d(int i) {
    arr[i+ i%10 + (i/10)%10 + (i/100)%10 + i/1000] = 0;
    return 0;
}

int main() {
    for(int i = 0; i++) {
        
    }
    return 0;
}