//expressions_hw1-K.Cheng

#include <iostream>
#include <iomanip>

using namespace std;

int main(){

int a;
double b;

cout<< "Input grade (60-100): "<< endl;
cin >> a;
b= (static_cast<double>(a)-60)/10;
cout <<"Converted grade (0.0 to 4.0): " <<b<<endl;

  return 0;
}
