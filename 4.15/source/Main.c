#include <stdio.h>
#include <math.h>

int main() {
    double principal = 5000.0;
    int years = 15;
    double rate;

    printf("Year\t10.0%%\t10.5%%\t11.0%%\t11.5%%\t12.0%%\n");

    for (int year = 1; year <= years; year++) {
        printf("%4d\t", year);
        for (rate = 10.0; rate <= 12.0; rate += 0.5) {
            double amount = principal * pow(1.0 + rate / 100.0, year);
            printf("%.2f\t", amount);
        }
        printf("\n");
    }

    return 0;
}
