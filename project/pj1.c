#include <stdio.h>

/**
 *  ���� : 5�ڸ�
 * �� : 57256
*/
int main(void) {
    int num = 57256;
    int total;

    // �ڵ�
    // num / 10000
    // num / 1000 - (num / 10000 * 10)
    // num / 100 - (num / 10000*100 + num/1000*10)
    // num / 10 - (num/10000*1000 + num/1000*100 + num / 100)
    // num / 1 - (num/10000*10000 + num/1000*100 + num / 100 + num / 10)
    int a = num / 10000;
    int b = num / 1000 - (num / 10000 * 10);
    int c = num / 100 - (a+b); 
    int d = num / 10 - (a+b+c);
    int e = num / 1 - (a+b+c+d);
    total = a+b+c+d+e;
    // 5 + 7 + 2 + 5 + 6 = 25
    printf("���� %d\n", total);
}