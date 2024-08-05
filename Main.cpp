//Zach Brown
//Date: 8/5/2024
//CS2 Exception Hanler

#include <iostream>
#include "EvenEater.h"

using namespace std;
void testEvenEater();

int main() {
	
	testEvenEater();

}

void testEvenEater() {
	int num;
	EvenEater eater;
	
	while (true) {
		std::cout << "Enter a number: ";
		cin >> num;

		try {

			std::cout << eater.eat(num) << std::endl;

		}
		catch (EvenEater::OddFoodException e) {
			std::cout << "YUCK! " << std::endl;
			std::cout << "That was not an even number" << std::endl;
		}

	};
}