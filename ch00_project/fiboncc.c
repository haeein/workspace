#include <stdio.h>

// 피보나치 수열 코드 개발, 실기시험은 이런느낌으로 나옴
// 피보나치 수열이란, 첫째 및 둘째 항이 1이며 그 뒤의 모든 항은 바로 앞 두 항의 합인 수열
// 1 1 2 3 5 8 13 ...


int main() {
    int num1 = 1, num2 = 1, fib;
    
    // 첫 번째와 두 번째 항 출력
    printf("피보나치 수열: %d %d ", num1, num2);
    
    
    // 무한 반복문을 사용하여 피보나치 수열 생성
    while(1) {
        fib = num1 + num2;  // 피보나치 수 구하기
        printf("%d ", fib);  // 구한 수 출력

        // 이전 두 수 갱신
        num1 = num2;
        num2 = fib;
        
        // 피보나치 수가 13을 넘으면 종료
        if (fib > 13) {
            break;  // 13을 초과하면 반복 종료
        }
    }
    
    return 0;
}
