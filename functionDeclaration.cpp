#include <iostream>
using namespace std;
// function declaration
int func();

int main() {
   // function call
   int i = func();
   cout << i << endl;
   return i;
}

// function definition
int func() {
   return 10;
}