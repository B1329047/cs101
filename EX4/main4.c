#include <stdio.h>

int main(){
    int i = 12345;
    int a = i % 10;
    int b = (i / 1000) % 10;
    int num = i - a - b*1000 + b + a*1000;
    printf("%d",num);
    return 0;
}
