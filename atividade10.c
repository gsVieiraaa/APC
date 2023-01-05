#include <stdio.h>

int main() {
    int a, b;
    scanf("%d", & a);
    scanf("%d", & b);
    if (a == b) {
        printf("empate\n");
    }
    if (a == 0) {
        if (b == 2 || b == 3) {
            printf("A\n");
        }
        if (b == 1 || b == 4) {
            printf("B\n");
        }
    }
    if (a == 1) {
        if (b == 0 || b == 4) {
            printf("A\n");
        }
        if (b == 2 || b == 3) {
            printf("B\n");
        }
    }
    if (a == 2) {
        if (b == 1 || b == 3) {
            printf("A\n");
        }
        if (b == 0 || b == 4) {
            printf("B\n");
        }
    }
    if (a == 3) {
        if (b == 1 || b == 4) {
            printf("A\n");
        }
        if (b == 0 || b == 2) {
            printf("B\n");
        }
    }
    if (a == 4) {
        if (b == 0 || b == 2) {
            printf("A\n");
        }
        if (b == 3 || b == 1) {
            printf("B\n");
        }
    }
}