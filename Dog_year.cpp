#include <iostream>

int main() {
  //Dog's Name
  char name[30];

  std::cout << "What is your dog's name? ";
  std::cin >> name;

  //The dogs age in years
  int dog_age;

  //Input how old the dog is in years
  std::cout << "How old is " << name << " in years? ";
  std::cin >> dog_age;

  //Dogs age earlier in the first 2 years by 21 and then by 4 every year after
  int early_years = 21;
  int later_years = (dog_age - 2) * 4;
  
  //Dog's actual age in human years
  int human_years = early_years + later_years;

  std::cout << name << " is " << human_years << " years old in human years! \n";

return 0;
}
