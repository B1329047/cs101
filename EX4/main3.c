#include <stdio.h>

int main(){
    int j = 1;
    for (int i = 1; i <= 9;){
        printf("%d * %d = %d\t", i, j, i * j++);
        if (j == 9){
            printf("\n");
            j = 1;
            i++;
        }
    }
    return 0;
}
