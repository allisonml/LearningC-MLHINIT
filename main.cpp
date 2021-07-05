// tells to include libraries
#include <iostream> 
#include <string>
using namespace std;

string helloWorld();

int main() {
  /* "character output stream", 
     "<<" is the operator
     "\n" indicates a new line, can be part of the string and is not outputted
  */
  std::cout << "Hello World!\n";
  string greeting = helloWorld();
  cout << helloWorld() + "(again)" << endl;

  std::cout << "       1\n";
  std::cout << "     2 3\n";
  std::cout << "   4 5 6\n";
  std::cout << "7 8 9 10\n";
}

string helloWorld() {
  string hello = "Hello";
  return hello + " World!";
}