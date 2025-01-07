#include <stdio.h>
 /*
 *정수형 자료형
 -  char, short, int, long, long long
 - 우측으로 갈수록 더 큰 값을 표현가능
 - char문자형-> 정수형으로 변환
 - 동일한 type인데 다양한 범위의 자료형을 사용하는 이유는
 메모리의 낭비를 막고 효율적으로 관리하기 위해서
 -  현재는 int(4byte 라는것을 기억하셍ㅅ) 를 가장 많이 사용
 - sizeof() ->자료형 크기(byte단우;ㅣㅣ) 확인

*/
int main(){
char ch1 = 'A'; //문자로 초기화 아스키코드값으로 저장됨 65
char ch2 = 65; // 정수로 초기화 문자 A
printf("문자 %c의 아스키코드값은 %d 이다\n",ch1,ch2);
printf("아스키 코드 %d의 문자는 %c 이다\n" ,ch2,ch1);

printf("=======================================");
short sh = 32767; //short 의 최댓값(-32767 ~ +31767)
int in = 2147483647;
long ln = 2147483647;
long long lln = 12345687897843; //그냥 큰 값

//퀴즈 
//sh + 1 == -32767
printf("short 형 변수 출력:%d\n",sh);//alt+shfrt +방향키 아래
printf("int 형 변수 출력:%d\n",in);
printf("long 형 변수 출력:%ld\n",ln);
printf("long long 형 변수 출력:%lld\n",lln);

printf("int 형의 크기:%d byte \n",sizeof(int));
printf("long 형의 크기:%ld byte \n",sizeof(long));
printf("long long 형의 크기:%lld byte \n",sizeof(long long));


}

