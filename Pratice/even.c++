#include <iostream>
using namespace std;

int main() {
  int a ;
  cout <<"Enter a numer to check if its even or  odd : " ;
  cin >> a ;

  if (a % 2 == 0 ) {
      cout<<"Entered number is even ";
  } else {
    cout<<"odd";
  }
  return 0;
}