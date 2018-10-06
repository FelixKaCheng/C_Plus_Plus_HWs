// variables_hw1-K.Cheng
#include <iostream>
#include <string>
using namespace std;
int main(){

   double length, width, height, volume;

   cout<<"The length is ";
   cin>> length;
   cout<<"The width is ";
   cin>> width;
   cout<<"The height is ";
   cin>> height;

   volume= length*width*height;

   cout<<"The volume is "<< volume<< " cubic inches"<<endl;


  return 0;
}
