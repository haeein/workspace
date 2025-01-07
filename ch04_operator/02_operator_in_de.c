#include <stdio.h>


//증감연산자
// ++:1증가
// --:1감소

//++a 와  a++는 다르다

int main(){

    int a = 5, b = 3;
    int pre, post;

    pre = (++a) * 2; //무조건 1더하고 실행
    post = (b++) * 2; //실행후 1 더함
    printf("초기값:%d,%d\n",pre,post); //12,6
    printf("전위형:%d\n", pre); //12
    printf("후위형:%d\n", post); //6
    
}