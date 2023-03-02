#include <stdio.h>
#include <stdlib.h>
#define swap(x, y) {int tmp = (x); (x) = (y); (y) = tmp;}

int main() {
   int n, m, a, b;
   int *arr = 0;
   scanf("%d %d", &n, &m);
   arr = calloc(n, sizeof(int));
   for (int i = 0; i<n; i++) {
      arr[i] = (i+1);
   }
   for(int i = 0; i<m; i++) {
      scanf("%d %d", &a, &b);
      for(int j = 0; j<((b-a)/2)+1; j++) {
         swap(arr[(a-1)+j], arr[(b-1)-j]);
      }
   }
   for (int i = 0; i<n; i++) {
      printf("%d ", arr[i]);
   }
   free(arr);
   return 0;
}
