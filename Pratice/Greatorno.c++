#include <iostream>
using namespace std ;

int main () {
  int a,b ;
  cout << "Enter 1st no : " ;
  cin >> a ;

  cout << "Enter 2nd no : " ;
  cin >> b ;

  if (a >= b) 
  {
    cout<<"A is greater then b";
  } else {
    cout << "B is greater then A"; 
  }
  

  return 0;
}