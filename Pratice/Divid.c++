#include <iostream>
using namespace std ;

int main () {
  int a ;
  cout<<"Enter a number to check if its devisible by 5 : " ;
  cin >> a;
  if (a % 5 == 0 ) {
      cout<<"yes its devisible"; 
  } else {
    cout<<"No its not devisible";
  }
  
  return 0;
}