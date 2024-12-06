14. Print a Fibonacci triangle:
    ```
    0
    1 1
    2 3 5

solution:

#include <stdio.h>

int main()
{
    int n,i,j,a=0,b=1,c;
    scanf("%d",&n);
    for(i=0; i<n; i++){
        for(j=0; j<i+1; j++){
            printf("%d",a);
            c=a+b;
            a=b;
            b=c;
        }
        printf("\n");
    }

    return 0;
}



