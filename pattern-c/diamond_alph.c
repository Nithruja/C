22. Print a diamond of alphabets:
     
      A
     ABA
    ABCBA
     ABA
      A

solution:

#include <stdio.h>
int main() {
    int n;
    scanf("%d",&n);
    int mid = (n / 2) + 1;
    for (int i = 1; i <= n; i++) {
        int row_length = (i <= mid) ? i : n - i + 1;
        int spaces = mid - row_length;
        for (int j = 1; j <= spaces; j++) {
            printf(" ");
        }
        for (int j = 1; j <= row_length; j++) {
            printf("%c", 'A' + j - 1);
        }
        for (int j = row_length - 1; j >= 1; j--) {
            printf("%c", 'A' + j - 1);
        }
      printf("\n");
    }
return 0;
}