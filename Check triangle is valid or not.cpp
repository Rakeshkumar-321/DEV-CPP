#include <iostream>
using namespace std;

// Question: check Tringle is vaild or not
// Condition: A tringle is valid if A+B>C and B+C>A and C+A>B
// Brute Force Method
int main() {
  // << endl or '/n'; done se next line or new line me jata hai.
  int A, B, C;
  A = 20;
  B = 60;
  C = 90;

  if ((A + B > C) && (B + C > A) && (C + A > B))

  {
    cout << "valid tringle" << endl;
  } else {
    cout << "Invalid Tringle" << endl;
  }
  return 0;
}
