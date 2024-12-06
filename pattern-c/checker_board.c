16. Print a checkerboard pattern:
    ```
    * * * *
     * * * *
    * * * *


Solution:

#include<stdio.h>
int main(){
  int n=3,i,j;
    for(i = 1; i <= n; i++){
        for(j = 1; j <= n+1; j++){
            if( ( i==1 || i==n ) ){  
                printf("* ");
            } else{
                printf(" *");
            }
        }
        printf("\n");
}

}
