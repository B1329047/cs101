#include <stdio.h>

int main(){
    for (int i = 0; i < 9; i++){
        int n = i+1;
        printf("%d*%d=%d ",n,1,n*1);
        printf("%d*%d=%d ",n,2,n*2);
        printf("%d*%d=%d ",n,3,n*3);
        printf("%d*%d=%d ",n,4,n*4);
        printf("%d*%d=%d ",n,5,n*5);
        printf("%d*%d=%d ",n,6,n*6);
        printf("%d*%d=%d ",n,7,n*7);
        printf("%d*%d=%d ",n,8,n*8);
        printf("%d*%d=%d",n,9,n*9);
        printf("\n");
    }
    return 0;
}
