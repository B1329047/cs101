#include <stdio.h>

int main()
{
    int i = 8;
    if (i & i-1) {
        printf("False");
    }
    else {
        printf("True");
    }
    return 0;
}