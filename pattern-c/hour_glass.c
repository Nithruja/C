35. Print an hourglass pattern:
    ```
    *********
     *******
      *****
       ***
        *
       ***
      *****
     *******
    *********
    ```
solution:
#include <stdio.h>

int main()
{
    int n,i,j,s,r;
    scanf("%d",&n);
   for(i = 1; i <= (n*2)-1; i++){
        r = i > n ? (n * 2) - i : i;
        for(int s = 1; s <= r-1 ; s++){
            printf(" ");
        }
        for(j = 1; j <= n-r+1 ; j++){
            printf("* ");
        }
        printf("\n");
}

    return 0;
}

