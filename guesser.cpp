#include <iostream>
#include <random>

int main(){
	int correct;
	int guess;
	int turns = 0;
	std::string name;
	bool keepGoing = true;

	std::random_device rd; // creates a random device (RNG) and preceeds it
	std::uniform_int_distribution<int> dist(1,100); /* creates a distributer (gathering numbers of a certain type (int in this case) 
							// in a certain range (1-100 in this case)
							// more reliable than other random number generators
							*/
	correct = dist(rd);

	std::cout << "Correct: " << correct << std::endl;

	while (keepGoing){
		turns++;
		std::cout << turns << ") Please enter a number: ";
		std::cin >> guess;

		if (guess < correct){
			std::cout << "too low." << std::endl;
		}
		else if (guess > correct){
			std::cout << "too high." << std::endl;
		}
		else {
			std::cout << "PERFECT! " << std::endl;
			keepGoing = false;
		} // end if

	} // end while
	return 0;
} // end main
