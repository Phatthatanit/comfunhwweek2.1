#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main() {
    int k, x = 2;
    printf("Enter number : ");
    scanf("%d", &k);
    if (k < 2|| k<=0) {
        printf("Error");
    }
    else {
        printf("Factoring result : ");
        while (k != 1) {
            while (k % x == 0) {
                printf("%d", x);
                k /= x;
                if (k == 1)break;
                printf(" x ");
            }
        }
        x++;
    }
    return 0;
}

