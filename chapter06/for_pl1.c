#include <stdio.h>

// 1~10�� ���� ���� ���
int main(void) {
    int sum = 0; // ���� ����

    // for�� ����Ͽ� �ۼ��ϱ�
    for(int i = 1; i <= 10; i++) {
        //sum = sum + i;
        sum += i;
    } 

    printf("���� ���� : %d\n", sum);

}