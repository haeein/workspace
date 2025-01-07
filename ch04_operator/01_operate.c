#include <stdio.h>

int main(){

    int a,b;
    int sum, sub, mul,inv;

    a = 10;
    b = 20;

    sum = a+b;
    sub = a-b;
    mul = a * b;
    inv = -a;

    //나눗셈이 중요
    double apple;
    int banana;
    int orange;

    apple = 5.0 /2.0; //2.5
    banana = 5 / 2;  // 몫 2
    orange = 5 % 2;     //나머지 1

    printf( "%1lf\n", apple);
    printf("%d\n",banana);
    printf("%d\n",orange);
    

    //복합 대입 연산자 (이렇게만 씀씀)
    //-=,*=,+=,/=,%=
    //ex) a = a +20 == a += 20

}