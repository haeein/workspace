#include <stdio.h>
// 성적 계산기
// - 3과목의 성적(0-100)을 입력
// 배열에 저장
// 총점과 평균 계산
// 출력

int main() {
    char name[20];
    int score[3];
    int total = 0; // 총점 초기화
    double avg;    // 평균

    // 이름 입력
    printf(">> 이름: ");
    scanf("%s", name);

    // 점수 입력
    for (int i = 0; i < 3; i++) {
        printf("점수 %d: ", i + 1);
        scanf("%d", &score[i]);  // 점수를 입력받아 배열에 저장
    }

    // 총점 계산
    for (int i = 0; i < 3; i++) {
        total += score[i];  // 점수들을 모두 더해서 총점 계산
    }

    // 평균 계산
    avg = total / 3.0;

    // 출력
    printf("%s님의 총점은 %d, 평균은 %.2f입니다.\n", name, total, avg);

    return 0;
}
