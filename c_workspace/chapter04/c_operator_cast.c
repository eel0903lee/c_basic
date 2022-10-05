// Casting : 형변환
// - int(정수) → double(실수)

#include <stdio.h>

int main(void)
{
    int a = 20, b = 3;
    double res;

    // int → double (작은 type → 큰 type)
    // 6.7 = 20.0 / 3.0
    res = (double)a / (double)b;
    printf("a = %d, b = %d\n, a, b");
    printf("a/b의 결과 : %.1lf\n", res);

    // double → int (큰 type → 작은 type) : 값의 손실!!!
    a = (int)res;   //res(6.7)
    printf("(int) %.1lf의 결과 : %d\n", res, a);
}
