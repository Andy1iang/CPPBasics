// preprocessor statement
#include <iostream>

/*
    This is a multi-line comment.
    This line will be ignored.
    So will this one.
*/

// function declaration
int variables();
int inOut();
int operators();

int main()
{
  variables();

  inOut();

  operators();

  return 0;
}

int variables()
{
  // variable declaration
  int a;

  // variable assignment
  a = 670;

  // variable initialization
  double b = 2.11; // copy initialization

  //int x{5}; // direct brace initialization (prevents narrowing)
  // default initialization is set to 0, do this when value will be changed later

  return 0;
}

int inOut()
{
  int a;
  std::cout << "Enter a number: ";
  std::cin >> a;
  std::cout << "Setting Mood Organ to: " << a << std::endl;

  return 0;
}

int operators()
{
  int a = 5;
  int b = 2;

  // arithmetic operators
  std::cout << "a + b = " << a + b << std::endl;
  std::cout << "a - b = " << a - b << std::endl;
  std::cout << "a * b = " << a * b << std::endl;
  std::cout << "a / b = " << a / b << std::endl;
  std::cout << "a % b = " << a % b << std::endl;

  // setting b to 5, then returning the new value of b to std::cout
  std::cout << "new b = " << (b=5) << std::endl;

  return 0;
}