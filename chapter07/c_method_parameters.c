#include <stdio.h>

/**
 * int main (void) {
 *     printf("%d\n, sum(a,b)")
 * }
 *     ��       (return)
 *     ��          ��
 *     ��          ��
 *     ��          ��
 *  (parameters)  ��
 * int sum(int x, int y){
 *     return x+y;
 * }
 * 
*/
// �Լ� �� (�Ű�����), return
// �Լ� ��     x,      return     
int get_num(void); //����, ##get_num�Լ��� main�Լ� ���� ������ �Լ� ���� �ʿ� ����##

int main(void) {
    printf("�� : %d", get_num()); //ȣ��
}

// void : �ش簪�� ������� ���� ���
int get_num(void) { //����
    int num;
    printf("number : ");
    scanf("%d", &num);
    return num;
}