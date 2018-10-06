// introduction_hw1 – K. Cheng
#include <iostream>
 using namespace std;
 int main( )
 {
 string day;
 string month;
 string year;

 cout << "What day is today? " ;
 cin >> day;
 cout << "What month is it? " ;
 cin >> month;
 cout << "What year is this? ";
 cin >> year;

 cout<< "Today is: " <<endl;
 cout<< "   "<< day <<endl;
 cout<< "\t  "<< month << endl;
 cout<< "\t\t "<< year << endl;
 return 0;
 }
