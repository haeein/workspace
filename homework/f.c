#include <stdio.h>


double FtoC(double fVal) {
    return (5.0 * (fVal - 32.0)) / 9.0;
}

int main(void) {
    double fVal = 0;
    double cVal = 0;


    printf("화씨온도: ");
    scanf("%lf", &fVal);


    cVal = FtoC(fVal);

    printf("화씨온도: %.1lf, 섭씨온도: %.1lf\n", fVal, cVal);

    return 0;
}
