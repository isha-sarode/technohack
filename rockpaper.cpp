#include <iostream>
#include <time.h>
using namespace std;

// Function to get the computer's choice
int ComputerChoice() {
    return rand() % 3; // Returns a number between 0 and 2
}

// Function to display the choice as a string
std::string choiceToString(int choice) {
    switch (choice) {
        case 0: return "Rock";
        case 1: return "Paper";
        case 2: return "Scissors";
        default: return "Unknown";
    }
}

// Function to determine the winner
std::string determineWinner(int playerChoice, int computerChoice) {
    if (playerChoice == computerChoice) {
        return "It's a tie!";
    }
    if ((playerChoice == 0 && computerChoice == 2) ||
        (playerChoice == 1 && computerChoice == 0) ||
        (playerChoice == 2 && computerChoice == 1)) {
        return "You win!";
    }
    return "Computer wins!";
}

int main() {
    srand(static_cast<unsigned>(time(0))); // Seed the random number generator

    int playerChoice;
    std::cout << "Enter your choice (0 = Rock, 1 = Paper, 2 = Scissors): ";
    std::cin >> playerChoice;

    if (playerChoice < 0 || playerChoice > 2) {
        std::cout << "Invalid choice. Please enter 0, 1, or 2." << std::endl;
        return 1;
    }

    int computerChoice = ComputerChoice();
    std::cout << "Computer chose: " << choiceToString(computerChoice) << std::endl;
    std::cout << "You chose: " << choiceToString(playerChoice) << std::endl;

    std::cout << determineWinner(playerChoice, computerChoice) << std::endl;
    return 0;
}