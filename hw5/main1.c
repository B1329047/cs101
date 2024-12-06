#include <stdio.h>

int main(){
    int a = 7;
    for (int i = 0; i <a; i++){
        int x = i+1;
        for (int n = 0; n < a; n++ ){
            if (n < a-x){
                printf(" ");
            }
            else{
                printf("%d ",x);
            }
        }
        printf("\n");
    }
    return 0;
}
