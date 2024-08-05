#include "EvenEater.h"

#include <iostream>

class OddFoodException {
	
};


std::string EvenEater::eat(int num) {
	std::string prompt;
	if (num % 2 == 0) {
		return prompt ="Yum!";
	}
	else {
		throw OddFoodException();
	}

}