#include <stdio.h>
//지수표현법
//  - x10을 e로 표현
//  - 0.0000314=3.14e-5,
int main() {
    //print + format = printf
    printf("%.1lf\n", 1e6); ///1000000.0 enter
    printf("%.7lf\n", 3.14e-5);//3.14에 10을 5번 곱함 거꾸로? 0.0000314 . 해석: 소숫점을 7번자리까지 출력 후 한 줄 개행

    printf("%le\n", 0.0000314);//지수표현 바꿈
}