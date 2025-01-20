/**
 * 지시자
 *  1. #include: 지정한 파일을 소스코드에 포함
 *   ex) #include <stdio.h> 
 *       → include 디렉토리에서 stdio.h 파일을 찾아 코드에 복사
 *  2. #define: 매크로 상수와 매크로 함수를 만들 때 사용
 *   ex) #define PI 3.14
 *       → PI는 상수 3.14로 변경
 *   ex) #define SUM(x, y) ((x)+(y))
 *       → SUM(10, 20)은 ((10)+(20))으로 변경
 *  3. #if, #else, #elif, #ifdef, #ifndef, #endif: 조건부 컴파일 지시자
 * 
 * C언어 컴파일 과정(3단계)
 *  ■ 소스파일(abc.c) : 직접 코딩
 *  
 *  1단계) 전처리
 *    - 지시자(#include, #define, ...)에 따라 프로그램에 필요한
 *      소스 중 외부에 잇는 소스를 불러옴
 *    ↓
 *  ■ 전처리 된 소스파일
 *  
 *  2단계) 컴파일
 *   - CPU가 해석할 수 있는 명령어들로 구성 된 기계어로 변환
 *   - 그러나 바로 실행 불가
 *     (프로그램 운영체제에 의해 실행되므로 설치 된 운영체제가
 *      인식할 수 있게 변경 필요)
 *   + 컴파일 + 어셈블
 *     컴파일: 전처리 된 소스파일 → 어셈블리어
 *     어셈블: 어셈블리어 → 기계어
 *   ※ C언어의 컴파일 과정을 4단계로 나누면
 *     abc.c → 1.전처리(abc.i) → 2.컴파일(abc.s) → 3.어셈블(abc.o) → 4.링크(abc.exe)
 *  ■ 개체파일(abc.o)
 * 
 *  3단계) 링크
 *   - startup code(프로그램 실행 전 필요한 준비작업)를
 *     결합하는 과정
 *   - startup code에서 main()을 호출
 *   - main() 작성 된 코드가 실행
 *  ■ 실행파일(abc.exe)
 * 
 */

#include <stdio.h>
#define PI 3.14

int main() {
    printf("%.2lf", PI);
}