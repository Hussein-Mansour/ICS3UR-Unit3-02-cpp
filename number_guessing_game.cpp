// Copyright (c) 2021 Hussein Mansour All rights reserved
//
// Created by: Hussein Mansour
// Created on: Sat/May12021
// This program a Number Guessing Game


#include <iostream>


int main() {
    // this function checks if the number guessed is correct or wrong
    const int NUMBER = 4;

    int guessedNumber;

    std::cout << "hey,guess the number if you can!\n" << std::endl;

    // input
    std::cout << "Enter the number between 0 - 9:"
    << std::endl;
    std::cin >> guessedNumber;

    // process & output
        if (NUMBER == guessedNumber) {
            // output
            std::cout << "You guessed correct!";
    }

    if (NUMBER != guessedNumber) {
            // output
            std::cout << "You guessed wrong!";
    }

     std::cout << "\n\nDone." << std::endl;
}
