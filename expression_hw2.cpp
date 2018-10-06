//expressions_hw2-K.Cheng

#include <iostream>
#include <iomanip>

using namespace std;

int main(){
const double tax_rate =0.08875;
double temp, subtotal, tax, total;

cout << "cost of first item: $";
cin >> temp;

subtotal=subtotal+temp;

cout << "cost of second item: $";
cin >> temp;
subtotal=subtotal+temp;

cout << "cost of third item: $";
cin >> temp;
subtotal=subtotal+temp;

cout << "$"<<subtotal<<endl;;
tax=subtotal*tax_rate;
cout << "$"<<fixed<< setprecision(2)<<tax<<endl;
total = subtotal+tax;
cout << "$"<<fixed<< setprecision(2)<<total;

  return 0;
}
