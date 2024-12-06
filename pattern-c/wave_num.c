26. Print a wave pattern:
    ```
    *   *   *
     * * * *
      *   *
    ```
solution:

#include <stdio.h>

int main()
{
    int n;
    scanf("%d",n);
    for (int i = n; i >= 1; i--) {
        for (int j = 1; j <= n*3; j++) {
            if ((i + j) % 4 == 0 || (i % 2 == 0 && j % 4 == 0)) {
                printf("*");
            } else {
                printf(" ");
            }
        }
        printf("\n");
    }


    return 0;
}
