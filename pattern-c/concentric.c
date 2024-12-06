32. Print a pattern of concentric rectangles:
    ```
    44444
    43334
    43234
    43334
    44444
    ```
solution:

#include <stdio.h>
int main() {
    int n;
    scanf("%d",&n);
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n; j++) {
            int value;
            if (i == 1 || j == 1 || i == n || j == n) {
                value = n - 1;
            }
            else if (i == 2 || j == 2 || i == n - 1 || j == n - 1) {
                value = n - 2;
            }
            else if (i == (n / 2) + 1 && j == (n / 2) + 1) {
                value = n - 3;
            }

            printf("%d", value);
        }
        printf("\n");
    }
return 0;
}

