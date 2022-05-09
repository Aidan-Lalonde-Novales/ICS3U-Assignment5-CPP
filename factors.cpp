// Copyright (c) 2022 Aidan Lalonde-Novales All rights reserved

// Created by Aidan Lalonde-Novales
// Created on 2022-05-09
// This program shows the factors of an inputted number.

#include <iostream>
#include <string>

int main() {
    // this function finds and returns factors
    int counter = 1;
    std::string userNumberString;
    int userNumber;

    // input
    std::cout << "Enter a positive integer to see it’s factors: ";
    std::cin >> userNumberString;

    // process & output
    try {
        userNumber = std::stoi(userNumberString);

        if (userNumber > 0) {
            for (counter = 1; counter < userNumber + 1; counter++) {
                if (userNumber % counter == 0) {
                    std::cout << counter << std::endl;
                } else {
                    continue;
                }
            }
        } else {
            std::cout << "\nPlease ensure that your integer is positive."
            << std::endl;
        }
    } catch (std::invalid_argument) {
        std::cout << "\nThat integer is invalid." << std::endl;
    }
    std::cout << "\nDone." << std::endl;
}
