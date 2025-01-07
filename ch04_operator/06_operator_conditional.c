#include  <stdio.h>
/**
 * 
 * 삼항 연산자(conditional operator)
 *  -3개의 항을 사용하는 연산자
 *  -  (조건) ? 값1: 값2
 * ㄴ 조건이 t면 값1 f면 값2
 */

int main(){
 int a =10,b = 20, res;
    res =(a>b) ? a:b;
 printf("큰값: %d\n",res);
}