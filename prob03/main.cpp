// Sales prediction

#include <iostream>

int main()
{

  double lastsales;

  // Asks for total of last years sales
  std::cout << "Last year's sales were $";
  std::cin >> lastsales;

  // Calculates Sales Prediction
  double increase = lastsales * 0.18;
  long predict = lastsales + increase;

  // Displays sales prediction
  std::cout << "This year's sales prediction: $" << predict << '\n';

  return 0;
}
