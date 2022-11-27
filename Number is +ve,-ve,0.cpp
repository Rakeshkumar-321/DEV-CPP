#include <iostream>
using namespace std;

Question: find the Number is Postive, Negative, Zero
 
// Brute Force Method
int main() {
  // << endl or '/n'; done se next line or new line me jata hai.
  int n;

 n = -3;

  if (n > 0) {
    cout << "Number is Postive";
  }
  else if (n < 0) {
    cout << "Number is Negative";

  }
  
  else {
    cout << "Number is Zero";
  }
}

//Using Nested if-else Statements Logic 
// if (n>=0)
// {
//   if(n==0)
//   cout<<"Zero";
//   else
//  cout<<"Number is Postive";
//   }
//   else
//   cout<<"Number is Negitive";
//   }

 // Ternary Operator Syntax Logic
//( Condition ) ? ( if True : Action) : ( if False : Action) ;

// if(n==0)
//   cout<<"Zero";
//   else (n>0)?
//   cout<<"Numberis postive" : cout<<"Number is Negitive";
//   }