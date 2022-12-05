#include <stdio.h>
/**
 *  �����͸� ����ϴ� ����
 *  -  ������ ����ϴ� ���� ���� ����� ���� �̸� ȣ��
 * (int num = 4;  �� num)
 *  - ������ ��� �� �߰������� ���� ����, �ּ� ����, ���� ���� �� ���� ���� �����ؾ� �� (����)
 * 
 *  - �����͸� ��� ����� �ʿ� ����!
 *  - �Ӻ���� ���α׷��� �� �� �޸𸮿� ���� �����ϴ� ��� 
 *    �Ǵ� ���� �Ҵ� �޸𸮸� ����ϴ� ��쿡�� �����Ͱ� �ݵ�� �ʿ���
*/
void swap(int *pa, int *pb);

int main(void){
    int a = 10, b = 20;
    int temp;
    /**
     *  �Լ��� �Ű�����(parameter) ������ �� ��� 3����
     *  1. Call by value : C���, ���� ���� ����
     *  2. Call by reference : JAVA���, ���� ��ġ�� �ּҸ� ����
     *  3. Call by assignment : Python���, �ڷ����� ���� 1, 2�� ��� ���
    */
    swap(&a, &b);
    printf("a:%d, b:%d\n", a, b);
}

void swap(int *pa, int *pb) {
    int temp;
    temp = *pa;
    *pa = *pb;
    *pb = temp;
}