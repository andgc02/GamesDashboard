#include "menu.h"

int main() {
	bool isRunning = true;
	while (isRunning) {
		displayMainMenu();
		int choice = getPlayerChoice();

		switch (choice) {
		case 1:
			std::cout << "Starting Tic Tac Toe..." << std::endl;
			// TODO: Add function call to start Tic Tac Toe game
			break;
		case 2:
			std::cout << "Starting RPG_Title..." << std::endl;
			// TODO: Add function call to start RPG_Title
			break;
		case 3:
			std::cout << "Starting Snake 2..." << std::endl;
			break;
		case 4:
			std::cout << "Exiting dashboard. Goodbye!" << std::endl;
			isRunning = false;
			break;
		default:
			// This case should never occur due to input validation
			break;
		}
	}
	return 0;
}