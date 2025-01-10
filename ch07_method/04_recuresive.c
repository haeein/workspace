#include <stdio.h>
//재귀함수 자기자신을 호출하는 함수
//무한 루프.이렇게 쓰면 안댬
void fruit(void);

void fruit(void){
    printf("apple");
    fruit();
}

int main(){
    fruit();
}
