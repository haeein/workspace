#include <stdio.h>

int main(){
    //배열 초기화
    //-배열의 초기화는 선언시 최초 한번만 가능
    //-그 이후로는 배열 요소에 일일이값으 ㄹ대입
    //-{} 사용해서 한번에 대입 불가

    //1. 기본적인 초기화
    int ary1[5] ={1,2,3,4,5};

    //2. 초기값이 배열 개수보다 적은 경우
    int ary2[5]={1,2,3};

    //3. 모든 요소를 0으로 처리

    int ary[1000] = {0};
    //4. 배열 개수 생략된경우
    // ㄴ 초기값 개수만큼 배열 크기를 설정
    int ary4[] ={1,2,3};
    

}