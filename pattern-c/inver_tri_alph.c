24. Print an inverted triangle of alphabets:
    
    A B C D
    A B C
    A B
    A

solution:


#include <stdio.h>
int main()
{
    int n,i,j;
    scanf("%d",&n);
    for(i=n; i>=1; i--){
        for(j=0; j<i; j++){
            printf("%c",'A'+j);
        }
    printf("\n");
    }

    return 0;
}

