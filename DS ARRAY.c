#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

   int n,i,x;
    scanf("%d", &n);
    int *p= (int*)malloc(n * sizeof(int));
    for (i=0;i < n;i++) {
        scanf("%d", (p + i));
    }
   for (i=n-1;i >=0;i--) {
        printf("%d ", *(p + i));
    }
    return 0;
}
