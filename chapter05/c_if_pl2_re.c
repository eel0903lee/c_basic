#include <stdio.h>

// ���� ���� - �����丵
int main(void) {
    // 1�� : ����ڷκ��� ���� �Է�
    int score;
    char grade;
    
    printf("���� : ");
    scanf("%d", &score);

    if(score >=0 && score <=100) {
        // 2�� : �����κ��� ���(A,B,C,...) �Ǵ� 
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
        // 3�� : ������ ����� ���
        printf("�л��� ������ %d������ %c�����Դϴ�.", score, grade);
    } else {
        // ���� : 0�� �̸�, 100�� �ʰ�
        printf("ERROR : 0 ~ 100�� ������ ���� �Է��ϼ���.");
    }
}