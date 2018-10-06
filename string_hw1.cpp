//string_hw1 -K. Cheng

#include <iostream>
#include <string>
using namespace std;

int main( ) {
  string first;
  string last;
  string name;

  first="Ka ";
  last ="Cheng";
  name = first + last;

  cout<< "Name: " << name << endl;
  cout<< "Length: " << name.length() <<endl;

  name.insert(3, "L ");
  cout << "Name: " << name << endl;

  cout << "Initials: " << name[0] <<"." << name[3] << "." << name[5] << "." << endl;

  return 0;

}
