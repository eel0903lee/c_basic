#include <stdio.h>

int main(void)
{
    int a = 10, b = 20, res;

    // ���׿����� = (����) ? ��1(T) : ��2(F)
    res = (a > b) ? a : b;
    printf("ū �� : %d\n", res);
}
