#include <stdio.h>

int main() {
    int c1, c2, A1, A2, AT;
    scanf("%d", & c1);
    scanf("%d", & c2);

    if (c1 > c2) {
        A1 = c2 * 70;
        A2 = ((c1 - c2) * 70) / 2;
    }
    if (c1 == c2) {
        A1 = c2 * 70;
        A2 = 0;
    }

    if (c2 > c1) {
        if (c2 > c1) {
            A1 = c1 * 70;
            A2 = ((c2 - c1) * 70) / 2;
        }
    }

    AT = A1 + A2;

    if (AT >= 5600) {
        if (AT == 5600) {
            printf("0\n");
        } else
            printf("1\n");

    } else
        printf("2\n");
    return 0;
}