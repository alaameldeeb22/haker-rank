#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{

    int n,i,j,min1,min2,min;
    scanf("%d", &n);
  	// Complete the code to print the pattern.
      int m= n*2-1;
      for(i=1; i <= m; i++){
       for(j=1; j <= m; j++){
        min1=i<=m-i?i-1:m-i;
        min2=j<=m-j?j-1:m-j;
        min=min1<=min2?min1:min2;
        printf("%d ",n-min);
       }
       printf("\n");
    }
    return 0;
}
