//expressions_hw3-K.Cheng

#include <iostream>
#include <iomanip>

using namespace std;

int main(){
int i;
const int Quarters = 25;
const int Dimes = 10;
const int Nickels = 5;
const int Pennies =1;

cout << "Enter dollar amount (as an integer) :"<<endl;
cin >> i;
cout <<"The equivalent in coins: " << endl;
cout<<i/Quarters<<" Quarters" << endl;
cout<< (i%Quarters)/Dimes << " Dimes"<<endl;
cout<< (i%Quarters)%Dimes/Nickels << " Nickels" << endl;
cout << (i%Quarters)%Dimes%Nickels/Pennies << " Pennies" << endl;


  return 0;

}
