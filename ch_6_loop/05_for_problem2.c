#include <stdio.h>
// 구구단 2-9단 출력
int main() {
    for (int i = 2; i <= 9; i++) { // 단 수 설정
        for (int j = 1; j <= 9; j++) { // 곱하는 수 설정
            printf("%d x %d = %d\n", i, j, i * j); // 결과 출력 //2단 할 때 1-9반복, 3단 할 때 1-9반복
        }
     //   printf("\n"); // 각 단 출력 후 줄바꿈
    }
   // return 0; // 프로그램 정상 종료
}
