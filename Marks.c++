#include <iostream>
 using namespace std ;

 int main () {
  int marks ;
  cout<< "Enter the marks" ;
  cin>>marks;
  if ( marks >= 90 ) {
      cout<< "A" ;
  } else if (marks >= 70 && marks <= 90 ) {
      cout << "B" ;
  } else if ( marks >= 50 && marks <= 70 ) {
    cout << "C";  
  } else {
    cout<<"D";
  }

 }