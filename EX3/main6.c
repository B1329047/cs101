#include <stdio.h>

int main() {
    int i = 1601;
    if (i < 1500){
        printf("70元");
    }
    else{
        if (i % 100){
            int h = (((i-1500)/100)+1);
            printf("%d元",70+h*10);
        }
        else{
            int h = ((i-1500)/100);
            printf("%d元",70+h*10);
        }
    }
    return 0;
}
