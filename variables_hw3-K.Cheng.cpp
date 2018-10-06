// variables_hw3-K.Cheng
#include <iostream>
#include <string>
using namespace std;
int main(){

  int lower, upper;
      char lowerCase, upperCase;

      cout << "Input a lowercase letter: ";
      cin >> lowerCase;

      lower = int(lowerCase);
      upper = lower - 32;

      cout << "The uppercase equivalent is " << (char)upper << endl;





  return 0;
}
