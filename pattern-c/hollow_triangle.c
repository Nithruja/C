15. Print a hollow triangle:
    ```
       *
      * *
     *   *

solution:


#include <stdio.h>

int main()
{
    int n,i,j,s;
    scanf("%d",&n);
    for(i=0; i<n; i++){
        for(s=0; s<n-i; s++){
            printf(" ");
        }
        for(j=0; j<=i; j++){
            if(j==0 || j==i){
                printf("* ");
            }
            else{
                printf("  ");
            }
        }
        printf("\n");
    }

    return 0;
}