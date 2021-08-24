#include <iostream>
#include <string>

// Skriv et program som ber om fullt navn på én linje

// Skriv et program som spør du er eldre enn 20.
// Input skal enten være Y eller N
// Hvis Y: print "You are old enough to enter"
// Hvis N: print "You are not old enough to enter"
// Hvis ingen av delene: print "Invalid input"

// Skriv et program som ber om to tall, legger de sammen
// og printer de.

int main()
{
	// Get the full name in one line:
	std::string name{};
	std::cout << "Enter your name: ";
	std::getline(std::cin, name);
	std::cout << "Your name is: " << name << std::endl;
	std::cout << std::endl;
	
	// Program that asks if you are older than 20:
	char answer{};
	std::cout << "Are you older than 20 years old?";
	std::cin >> answer;
	
	if (answer == 'Y' || answer == 'y')
	{
		std::cout << "You are old enough to enter";
	}
	else if (answer == 'N')
	{
		std::cout << "You are not old enough to enter";
	}
	else
	{
		std::cout << "Invalid input";
	}

	// Program that asks for two numbers and adds them together:
	int numberOne{};
	int numberTwo{};
	int total{};

	std::cout << "Please enter number one: ";
	std::cin >> numberOne;
	std::cout << "Please enter number two: ";
	std::cin >> numberTwo;
	
	total = numberOne + numberTwo;
	std::cout << "The total is: " << total;

	return 0;
}