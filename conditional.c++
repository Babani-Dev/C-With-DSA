// If-else

#include <iostream>
using namespace std ;

int main () {
  int age = 18;
  cout << "Enter your age ;";
  cin >> age;
  if(age >= 18) {
    cout << "You cant vote\n";
  }
  else {
    cout <<"You can vote\n";
  }

  return 0;
}