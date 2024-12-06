18. Print a zig-zag pattern:
    ```
      *   *   *
     * * * * *
    *   *   *

solution:


#include<stdio.h>
int main(){
int n=3;
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n*4-1; j++) {
            if ((i + j) % 4 == 0 || (i % 2 == 0 && j % 4 == 0)) {
                printf("*");
            } else {
                printf(" ");
            }
        }
        printf("\n");
    }

}