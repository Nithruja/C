11. Print numbers in an increasing triangle:completed
    ```
    1
    2 3
    4 5 6

solution:

#include <stdio.h>

int main()
{
    int n,i,j,s=1;
    scanf("%d",&n);
    for(i=0; i<n; i++){
        for(j=0; j<i+1; j++){
            printf("%d",s);
            s++;
        }
        printf("\n");
    }

    return 0;
}

