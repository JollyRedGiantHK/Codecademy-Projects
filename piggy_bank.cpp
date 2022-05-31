#include <iostream>

int main() {
  //Currency left over from the trip.
  double pesos;
  double reais;
  double soles;
  double dollars;
  
  //Prompt for amounts left over
  std::cout << "Enter number of Columbian Pesos: ";
  std::cin >> pesos;

  std::cout << "Enter number of Brazilian Reais: ";
  std::cin >> reais;

  std::cout << "Enter number of peruvian Soles: ";
  std::cin >> soles;

  //Conversion rates
  double conversion_pesos = .00025 * pesos;
  double conversion_reais = .21 * reais;
  double conversion_soles = .27 * soles;

  //Total of USD after conversion
  dollars = conversion_pesos + conversion_reais + conversion_soles;

  std::cout << "US Dollars = $" << dollars << "\n";

  return 0;
}
