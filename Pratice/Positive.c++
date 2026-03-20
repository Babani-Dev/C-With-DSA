#include <iostream>
using namespace std;

int main () {
  int a ;
  cout << "Enter a number to check if its positive or negative or zero : " ;
  cin >> a ;

  if ( a > 0 ){
    cout<<"Entered number  is positive";
  }  else if ( a < 0 )  {
    cout<< "Entered nummber is negative";
  } else if ( a == 0 ) {
    cout << "Entered number is zero";
  }
  

  return 0 ;
}