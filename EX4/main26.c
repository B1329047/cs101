
#include <stdio.h>

int str_len(char* s){
    if (!*s){
        return 0;
    }
    return 1 + str_len(s+1);
}

int main()
{
    char s[] = "IU is a girl!";
    printf("(%s) len = %d\n", s, str_len(s));
    return 0;
}
