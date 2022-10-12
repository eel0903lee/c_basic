#include <stdio.h>

// 학점 계산기 - 리펙토링
int main(void) {
    int score;
    char grade;
    
    printf("점수 : ");
    scanf("%d", &score);

    if(score >=0 && score <=100) {
        // 점수 : 0 ~ 100
        if( score >= 91) {
            grade = 'A';
        } else if(score >= 81) {
            grade = 'B';
        } else if(score >= 71) {
            grade = 'C';
        } else if(score >= 61) {
            grade = 'D';
        } else if(score >= 0) {
            grade = 'F';
        }
        printf("학생의 점수는 %d점으로 %c학점입니다.", score, grade);
    } else {
        // 점수 : 0점 미만, 100점 초과
        printf("ERROR : 0 ~ 100점 사이의 값을 입력하세요.");
    }
}