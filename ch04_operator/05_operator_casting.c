#include <stdio.h>
/**
 * 형변환(casting)
 * 1. 프로모션(작은 type의 값을 -> big type)
 * -> 문제 없음 (프로그래밍 언어가 자동으로 형 변환 해줌)
 *  ex) int값 -> double 값 
 * 2. casting (big type->small type)
 * -값의 손실이 생김(직접 코드 작성)
 * ex) 3.14 ->int(3)
 * 
 */
int main(){
    //1.프로모션
 double res;
 res = 5;
 printf("%1lf\n",res);
    //2.캐스팅
    double pi = 3.14;
    int a;
    a = (int) pi;
    printf("%d",a);//?
}