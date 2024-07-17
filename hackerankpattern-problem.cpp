#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);

    int size = 2 * n - 1;

    for (int i = 0; i < size; i++) {
        for (int j = 0; j < size; j++) {
            int min = n;
            if (i < min) {
                min = i;
            }
            if (j < min) {
                min = j;
            }
            if (size - i - 1 < min) {
                min = size - i - 1;
            }
            if (size - j - 1 < min) {
                min = size - j - 1;
            }
            printf("%d ", n - min);
        }
        printf("\n");
    }

    return 0;
}

