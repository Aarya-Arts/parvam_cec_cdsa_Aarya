#include <stdio.h>

int main() {
    int row;
    printf("Enter the number of rows: ");
    scanf("%d", &row);

    for (int i = 1; i <= row; i++) {
        // First Diamond: Upper part
        for (int j = 1; j <= row - i; j++) {
            printf("\t");
        }
        for (int j = 1; j <= (2 * i - 1); j++) {
            printf("*\t");
        }

        // Gap between diamonds
    for (int j = 1; j <= row; j++) {
            printf("\t");
        }

        // Second Diamond: Upper part
        for (int j = 1; j <= row - i; j++) {
            printf("\t");
        }
        for (int j = 1; j <= (2 * i - 1); j++) {
            printf("*\t");
        }

        printf("\n");
    }

    for (int i = row - 1; i >= 1; i--) {
        // First Diamond: Lower part
        for (int j = 1; j <= row - i; j++) {
            printf("\t");
        }
        for (int j = 1; j <= (2 * i - 1); j++) {
            printf("*\t");
        }

        // Gap between diamonds
        for (int j = 1; j <= row; j++) {
            printf("\t");
        }

        // Second Diamond: Lower part
        for (int j = 1; j <= row - i; j++) {
            printf("\t");
        }
        for (int j = 1; j <= (2 * i - 1); j++) {
            printf("*\t");
        }

        printf("\n");
    }

    return 0;
}
