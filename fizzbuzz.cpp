#include <iostream>

int main(){
  // Fizzy or Buzzy or both! What will happen next...
  for (int i = 1; i <= 100; i++)
  {

    if (i % 3 == 0 && i % 5 == 0) 
    {
      std::cout << "FizzBuzz\n";
    }

    else if (i % 3 == 0) 
    {
      std::cout << "Fizz\n";
    }
    else if (i % 5 == 0)
    {
      std::cout << "Buzz\n";
    }
    else {
      std::cout << i << "\n";
    } 
  }

  return 0;
}
