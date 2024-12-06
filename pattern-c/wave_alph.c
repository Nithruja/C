36. Print a wave of alphabets:
    ```
    A   A   A
     B B B B
      C   C
solution:

#include <stdio.h>

int main()
{
    int n=3; 
    char ch='A';
    for (int i = n; i >= 1; i--) {
        for (int j = 1; j <= n*3; j++) {
            if ((i + j) % 4 == 0 || (i % 2 == 0 && j % 4 == 0)) {
                printf("%c",ch);
            } else {
                printf(" ");
            }
        }
        ch++;
        printf("\n");
}

    return 0;
}
