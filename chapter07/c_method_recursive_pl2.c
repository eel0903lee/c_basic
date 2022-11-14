#include <stdio.h>

int main(void) {
    int res;
    res = f(123);
    printf("%d\n", res); 
}
int f(int n) {
    if(n>0) {
        return n % 10 + f(n/10);
    } else {
        return 0;
    }
    
}