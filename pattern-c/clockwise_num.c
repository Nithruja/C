37. Print a clockwise spiral of numbers:completed
    ```
    1  2  3
    8  9  4
    7  6  5
    ```
solution:

#include <stdio.h>
int main() {
    int n,i,j;
    scanf("%d", &n);
    int clock[n][n];
    int top = 0, bottom = n - 1, left = 0, right = n - 1, value = 1;

    while (top <= bottom && left <= right) {
        for (i = left; i <= right; i++)
            clock[top][i] = value++;
        top++;
        for (i = top; i <= bottom; i++)
            clock[i][right] = value++;
        right--;
        for (i = right; i >= left; i--)
            clock[bottom][i] = value++;
        bottom--;
        for (i = bottom; i >= top; i--)
            clock[i][left] = value++;
        left++;
    }
    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++)
            printf("%d ", clock[i][j]);
        printf("\n");
    }
    return 0;
}
