#include <iostream>
using namespace std ;

int main () {
  int n ;
  cout << "Enter a number to check is it even or odd : " ;
  cin >> n;
  if (n % 2 == 0 )
  {
    cout<< "Entered n numebr is even" ;
  } else {
    cout<< "GIven number is odd ";
  }
  return 0;

}