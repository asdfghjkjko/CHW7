#include <stdio.h>

int main(void) {
    int a, b, c;
    int max, min;

    printf("叫块计 : "); 
    scanf_s("%d %d %d", &a, &b, &c);

    if (a >= b && a >= c) {
        max = a;
    }
    else if (b >= a && b >= c) {
        max = b;
    }
    else {
        max = c;
    }

    if (a <= b && a <= c) {
        min = a;
    }
    else if (b <= a && b <= c) {
        min = b;
    }
    else {
        min = c;
    }

    printf("程计琌: %d\n程计琌: %d\n", max, min);

    return 0;
}
