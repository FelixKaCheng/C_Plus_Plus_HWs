// introduction_hw3 – K.Cheng
#include <iostream>
#include <iomanip>
using namespace std;
int main()
{

string major;
string school;

cout << "What is your major? ";
getline (cin, major);
cout << "What four year school do you plan to attend? ";
cin >> school;


cout <<"\t" << "You will be studying " << major << " at " << school <<"." << endl;

  return 0;
}
