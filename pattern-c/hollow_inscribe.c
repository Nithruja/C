29. Print a hollow diamond-inscribed square:
    ```
    * * * * *
    *       *
    *       *
    *       *
    * * * * *
    ```
solution:

#include <stdio.h>

int main() {
    int n,i,j;
    printf("Enter the number: ");
    scanf("%d", &n);

    for (i = 0; i < n; i++) {  
        for (j = 0; j<n; j++) {
            if ((i==0)||(i==n-1) || (j==0)||(j==n-1)) {
                printf("* "); 
            } else {
                printf("  "); 
            }
        }
        printf("\n");  
    }

    return 0;
}

