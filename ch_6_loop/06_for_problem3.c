#include <stdio.h>
/*별찍기
*
**
***
****
*****
*/
int main() {
  

    for (int i = 1; i <= 5; i++) {  //5번 반복
        for (int j = 1; j <= i; j++) {//한 번 반복 시 j 한 번 반복
            printf("*");
        }
        printf("\n");
    }

    printf("########################################\n");
    //역삼각형 별찍기

    for (int i = 5; i >= 1; i--) {  //5부터 시작해서 1보다 작을때까지 반복
        for (int j = 1; j <= i; j++) {//
            printf("*");
        }
        printf("\n");
    }

    
}
