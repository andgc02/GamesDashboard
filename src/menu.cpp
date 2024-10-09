#include "menu.h"

#include <iostream>

// Function to display the main menu to the player
void displayMainMenu() {
	std::cout << "======================" << std::endl;
	std::cout << "    GAME DASHBOARD    " << std::endl;
	std::cout << "======================" << std::endl;
	std::cout << "1. Play Tic Tac Toe" << std::endl;
	std::cout << "2. Play RPG_Title" << std::endl;
	std::cout << "3. Play Snake_2" << std::endl;
	std::cout << "4. Exit" << std::endl;
	std::cout << "Enter your choice: " << std::endl;
}

// Function to get player's choice and validate it
int getPlayerChoice() {
	int choice;
	std::cin >> choice;
	while (std::cin.fail() || choice < 1 || choice > 4) {
		std::cin.clear(); // Clear error
		std::cin.ignore(1000, '\n'); // Discard invalid input
		std::cout << "Invalid choice. Please enter a number between 1 and 3: ";
		std::cin >> choice;
	}
	return choice;
}

