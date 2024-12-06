12. Print a pattern of numbers in reverse:
    
    4 3 2 1
    3 2 1
    2 1
    1

solution:

#include <stdio.h>

int main()
{
    int n,i,j;
    scanf("%d",&n);
    for(i=n; i>=1; i--){
        for(j=i; j>=1; j--){
            printf("%d",j);
        }
        printf("\n");
    }

    return 0;
}
