#include <stdio.h>


//배열 길이 계산
// - c언어는 sizeof)()계산

//c언어 이외 객체 지향언어
//배열을 객체로 표현
//기본적으로 배열이름,length ->배열길이
//           len->배열길이       
int main(){

    int score[5];
    //sizeof(score) // -> 20byte
    //sizeof(score[0]) // ->4byte
    int count = sizeof(score) / sizeod(score[0]);
    printf("배열길이:%d",count);
    for(int i;i <count;i++){
        //
    }
}