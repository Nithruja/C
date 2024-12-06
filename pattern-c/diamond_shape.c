7. Print a diamond shape:completed
   ```
      *
     ***
    *****
     ***
      *
   ```
Solution:

#include <stdio.h>

int main()
{
    int n,i,j,k,r;
    scanf("%d",&n);
    for(i=1; i<=(n*2)-1; i++){
        int r=i>n?(n*2)-i:i;
        for(j=0; j<=n-r; j++){
            printf(" ");
        }
        for(k=1; k<=(r*2)-1; k++){
            printf("*");
        }
        printf("\n");
    }

    return 0;
}

