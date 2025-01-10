/**
 * return 반환겂
 * - 기본적으로 함수종료 호툴한 곳으로 돌아가기
 * 반환값-> 데이터 반환타입도 함수 정의부 정의
 * -반환값이 없는 경우는 데이터 반환타입 void정의
 * - return or 반환겂 모두 생략가능 !
 */


#include <stdio.h>

// 반환값이 없는 함수
void voidFnc() {
    printf("hello");
    return; // return은 생략할 수 있으므로 없어도 됩니다
}

// 반환값이 있는 함수 (정수형을 반환)
int intFnc() {
    return 99;
}

int main() {  // main 함수의 반환형을 int로 수정
    voidFnc();  // voidFnc 호출
    int result = intFnc();  // intFnc 호출하고 반환값을 result에 저장
    printf("\n반환값: %d", result);  // 반환값 출력
    return 0;  // main 함수 종료
}
