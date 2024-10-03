#include <stdio.h>

int main(void) {
    float a, b, c, d, e, f;
    printf("一整天的總里程數:");
    scanf_s("%f", &a);

    printf("汽油一公升/加侖多少錢:");
    scanf_s("%f", &b);

    printf("平均一公升/加侖能行駛多少公里:");
    scanf_s("%f", &c);

    printf("一天的停車費:");
    scanf_s("%f", &d);

    printf("一天的通行費(過路費):");
    scanf_s("%f", &e);

    f = (a / c) * b + d + e;
    
    printf("總花費是 %f\n", f);
    system("pause");
    return 0;
}
