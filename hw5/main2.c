#include <stdio.h>

int main(){
    float num = 0.0;
    int i = 1;
    while(i){
        if (((i-1)/2)%2 == 0){
        num += 4.0/i;   
        }
        else{
            num -= 4.0/i;
        }
        if (num >3.141590 && num < 3.141599){
            break;
        }
        else{
            i +=2;
        }
    }
    printf("PI是%6f x=%d",num,i);
    return 0;
}
