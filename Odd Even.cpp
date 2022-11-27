#include <iostream>
using namespace std;

int main() {
  // << endl or '/n'; done se next line or new line me jata hai.
  int a;
  a = 109659;

  if (a % 2)   // Logic 1
    if (a / 2) // Logic 2

    {
      cout << a << " is Odd Number " << endl;
    } else {
      cout << a << " is Even Number " << endl;
    }
}

  if (a % 2 == 0)   // Logic 3
  if (a / 2 == 0) // Logic 4

  {
    cout << a << " is Even Number " << endl;
  } else {
    cout << a << " is Odd Number " << endl;
  }