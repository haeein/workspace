#include <stdio.h> //기말고사 실기 난이도도
// 1.정수 값 입력받기 ex)412
// 2.
// 3.출력 4+1+2=7

int main() {
    int num = 412;
    int total = 0;

    while(num > 0) {
        total += (num%10);
        num /= 10;
    }

    printf("총합:%d ",total);
}
