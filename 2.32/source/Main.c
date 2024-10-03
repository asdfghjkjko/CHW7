#include <stdio.h>

int main(void) {
    float weight, height, bmi;

    printf("請輸入體重（公斤）：");
    scanf_s("%f", &weight);

    printf("請輸入身高（米）：");
    scanf_s("%f", &height);

    bmi = weight / (height * height);

    printf("您的BMI是：%.2f\n", bmi);

    if (bmi < 18.5) {
        printf("Underweight\n");
    }
    else if (bmi >= 18.5 && bmi < 24.9) {
        printf("Normal\n");
    }
    else if (bmi >= 25 && bmi < 29.9) {
        printf("Overweight\n");
    }
    else {
        printf("obese\n");
    }
    
    system("pause");
    return 0;
}