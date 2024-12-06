23. Print a rectangle of alphabets:
    
    A B C D
    A B C D
    A B C D

Solution:

#include <stdio.h>

int main()
{
    int n,i,j;
    scanf("%d",&n);
    for(i=0; i<n; i++){
        for(j='A'; j<='D'; j++){
            printf("%c",j);
        }
    printf("\n");
    }

    return 0;
}