9. Print a reverse triangle of numbers:completed
   ```
   1 2 3 4
   1 2 3
   1 2
   1

solution:

#include <stdio.h>

int main()
{
    int n,i,j;
    scanf("%d",&n);
    for(i=0; i<n; i++){
        for(j=0; j<n-i; j++){
            printf("%d",j+1);
        }
        printf("\n");
    }

    return 0;
}
