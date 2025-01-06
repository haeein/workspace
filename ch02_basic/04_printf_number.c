#include <stdio.h>

int main(){

    // format
    // 정수 (%d) - Decimal
    // 실수(%lf) -> Float
    // 문자(%t) -> Character
    // 문자열 (%s) -> string
    printf("%d\n", 10); //
    printf("%.1lf\n", 3.45); //3.45 를 출력하는데 소숫점 1자리까지 만 출력 -> 3.4까지 나오고 반올림이 된다 ->3.5

    printf( "%d와 %d의 합은 %d입니다", 10, 20, 30);
    
}
