/**
 * 
 * 
 * 변수: 하나의 값을 저장하는 메모리 공간
 * - 프로그래밍 언어에서는 메모리에 데이터들을 저장
 * - 메모리는 주소를가지고 있음
 * - 1번지마다 1byte크기
 * -ex) 100byte 메모리 사용중
 *  주소->0번지->99번지
 * -변수의 자료형에 따라 사용하는 주소의 크기가 다름
 *          ex) char ->1byte
 *              short ->2byte
 *              int  ->4byte
 *              float ->4
 *              double->8
 *
 */

#include <stdio.h>

int main(){

    int b;
    char a;
    double c;

//%u unsigned:기호제거(양수)

//%p pointer:16진수수
    printf("char 형 변수의주소: %u\n",&a);
    printf("int 형 변수의주소: %u\n",&b);
    printf("double 형 변수의주소: %u\n",&c);
}