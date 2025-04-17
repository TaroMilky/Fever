//
//  main.cpp
//  Fever
//
//  Created by Laurence Ipo on 4/16/25.
//

#include <iostream>

int main() {
  // Write code here
  int temp;

  std::cout << "Please enter your temperature in Fahrenheit: ";
  std::cin >> temp;
  
  if (temp >= 100){
    std::cout << "You have a fever. 🤒";
  }

  else {
    std::cout << "You do not have a fever. 🕺";
  }
}
