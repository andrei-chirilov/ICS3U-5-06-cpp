// Copyright (c) 2019 Andrei Chirilov All rights reserved.
//
// Created by: Andrei Chirilov
// Created on: November 2019
// This program calculates the rounded off number to a decimal place

#include <iostream>
#include <iomanip>
#include <cmath>


float Round(float number, float decimal) {
    // This function rounds the user's number to what they choose

    // Variables
    float RoundedNumber;

    // Process
    RoundedNumber = number*pow(10, decimal);
    RoundedNumber = RoundedNumber + 0.5;
    RoundedNumber = static_cast<int>(RoundedNumber);
    RoundedNumber = RoundedNumber/pow(10, decimal);

    return RoundedNumber;
}

int main() {
    // This function takes the user's number then outputs the number rounded

    // Variables
    std::string Rdecimal;
    std::string rounder;
    float roundeddec;
    float UserNumber;
    int IntRounder;

    // Process
    while (true) {
        std::cout << "Enter the number you wish to be rounded:" << std::endl;
        std::cin >> Rdecimal;
        std::cout << "Enter how many decimal places you want left:" \
        << std::endl;
        std::cin >> rounder;

        try {
            UserNumber = std::stof(Rdecimal);
            IntRounder = std::stoi(rounder);
            if (UserNumber == std::stof(Rdecimal) && \
                IntRounder == std::stoi(rounder)) {
                    roundeddec = Round(UserNumber, IntRounder);
                    std::cout << "" << std::endl;
                    std::cout << "Your rounded number is: " \
                    << roundeddec << std::endl;
                    break;
                } else {
                    std::cout << "Not a valid input." << std::endl;
                }
        } catch (std::invalid_argument) {
            std::cout << "Please input a valid input." << std::endl;
            std::cout << "" << std::endl;
        }
    }
}
