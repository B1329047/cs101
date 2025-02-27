#inlcude <stdio.h>

int main(){
  int i = 3101;
  int addtional= i - 1500;
  if ( addtional <= 0) {
    printf("70元\n");
  }
  else if ( addtional <= 100){
    printf("80元");
  }
  else{
    int count = addtional / 100;
    int remainder = ( addtional % 100)?1:0;
    int sum = (count + remainder) * 100 + 70;
    printf("%d元, sum);
      }
  return 0;
  }
