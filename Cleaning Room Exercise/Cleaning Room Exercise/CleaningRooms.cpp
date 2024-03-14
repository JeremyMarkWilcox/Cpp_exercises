#include <iostream>

int main() {
	std::cout << "Hello and welcome to Jer's cleaning service!" << std::endl;	

	int smallRooms{ 0 };
  std::cout << "How many small rooms do you need to clean? ";
  std::cin >> smallRooms;
 
  int largeRooms{ 0 };
  std::cout << "How many large rooms do you need to clean? ";
  std::cin >> largeRooms;

  const double pricePerSmallRoom{ 25.0 };
  const double pricePerLargeRoom{ 35.0 };

  const double salesTax{ 0.08 };
  const int estimateExpiration{ 30 }; // days

  std::cout << "\nEstimate for carpet cleaning service" << std::endl;
  std::cout << "Number of small rooms: " << smallRooms << std::endl;
  std::cout << "Number of large rooms: " << largeRooms << std::endl;

  std::cout << "Price per small room: $" << pricePerSmallRoom << std::endl;
  std::cout << "Price per large room: $" << pricePerLargeRoom << std::endl;

  std::cout << "Cost: $" 
	  << (pricePerSmallRoom * smallRooms) + 
	  (pricePerLargeRoom * largeRooms) 
	  << std::endl;

  std::cout << "Tax: $" 
	  << ((pricePerSmallRoom * smallRooms) + 
		  	  (pricePerLargeRoom * largeRooms)) * salesTax 
	  << std::endl;

  std::cout << "====================================" << std::endl;
  std::cout << "Total estimate: $" 
	  << ((pricePerSmallRoom * smallRooms) + 
		  		  	  (pricePerLargeRoom * largeRooms)) + 
	  ((pricePerSmallRoom * smallRooms) + 
		  		  	  (pricePerLargeRoom * largeRooms)) * salesTax 
	  << std::endl;
  std::cout << "This estimate is valid for " << estimateExpiration << " days" << std::endl;

  std::cout << std::endl;
  return 0;

}

