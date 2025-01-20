#include <stdio.h>
/*
beack: 즉시 반복문을 빠져나가세요
continue: 즉시 다음 반복으로 넘어가세요
두 개의 차이를 알고있으세요요
*/
int main(){
    for(int i=1; i<=10; i++){
        if(i%2 ==0) {
            continue;
        }

         if (i == 5){
            break;
        }
        printf("%d\n",i);

    }
}