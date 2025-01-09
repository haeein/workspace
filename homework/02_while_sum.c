#include <stdio.h>

//문제 : while문을 사용해서 1-100까지의 값을 사용해서 홀수합 짝수합을 계산하세요.

//짝수합, 홀수합 계산하기
int main(){
    int evenSum = 0; // 짝수합
    int oddSum = 0;  // 홀수합
    int i = 1;       // 초기 값 설정

    while(i <= 100) {
        // 홀짝 판별 조건식
        if(i % 2 == 0) { // 짝수일 경우
            evenSum += i; // 짝수의 합을 더함
        } else {          // 홀수일 경우
            oddSum += i;  // 홀수의 합을 더함
        }
        i++;  // i 값 증가
    }
    
    printf("짝수합: %d 홀수합: %d", evenSum, oddSum);

    return 0;
}
