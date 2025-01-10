#include <stdio.h> //기말고사 실기 난이도도
// 1.정수 값 입력받기 ex)412
// 2.
// 3.출력 4+1+2=7


int main() {
    int num;
    printf("숫자를 입력: ");
    scanf("%d", &num);  // Corrected scanf statement with the missing comma

    int total = 0;

    while (num > 0) {
        total += (num % 10);  // Extract the last digit and add it to total
        num /= 10;  // Remove the last digit
    }

    printf("총합: %d\n", total);  // Print the total sum of digits

    return 0;
}
