#include <stdio.h>
#include <string.h>//문자열을 다룰 수 있는 헤더 파일

/*
* char : 문자열 ex) 'A'
* String : 문자열 형  ex)"ABC"
* -c언어는 문자열 형이 존재하지 않음 -> 배열 + char형
* - JAVA,PYTHON, JAVASCRIPT 문자열형 존재함 -> 객체(string)
* 
* char배열명[문자열길이 + 1] = 문자열;
 ex) char abc[4]= "ABC"

 - 문자열 길이+1 이유는 문자열 끝에 '\0' (널 문자 ) 자동으로 추가
 - 배열이면 기본 자료형을 여러개 묶어서 사용하는 것
*/
int main(){
    char arr_fruit[20] = "strawberry";//char 배열 선언 및 문자열 초기화

    printf("딸기 :%s\n",arr_fruit); // c아니고 s
    //배열은 선언된 이후에 대입연산자로 값입력 불가 
    //arr_fruit = "apple"; 오류
    //- strcpy() 함수 사용하면  가능 ->문자열 복사
    strcpy(arr_fruit, "apple");// (o)
    printf("%s\n",arr_fruit);


}