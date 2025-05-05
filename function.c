  #include <stdio.h>

  int double_it(num){
    return num * num;
  }

  int main(){
      int x = 10;

      printf("%d", double_it(x));

      return 0;
  }