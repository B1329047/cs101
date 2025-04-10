#include <stdio.h>

int func(int n){
    if (n == 1){
        return 1;
    }
    return n * func(n-1);
}

int main()
{
    int a = 5;
    int x = func(a);
    printf("factorial %d = %d", a, x);
    return 0;

}
