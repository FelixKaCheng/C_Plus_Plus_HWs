// variables_hw2-K.Cheng
#include <iostream>
#include <string>
using namespace std;
int main(){

  float f, t;
      int i;
      printf("Enter a floating number: ");
      scanf("%f", &f);
      i = (int)f;
      printf("Integer part    :%d\n", i);
      t = f-i;
      printf("Fractional part :%f", t);

  return 0;
}
