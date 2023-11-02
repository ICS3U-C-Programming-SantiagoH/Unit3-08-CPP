// Copyright (c) 2023 Santiago Hewett All rights reserved.
//
// Created by: Santiago Hewett
// Date: Nov 1, 2023
// This program will ask the user
// for their year and it will tell them
// if it is a leap year or not with try catch

#include <cmath>
#include <iomanip>
#include <iostream>
#include <random>

int main() {
    // declare userYearString

    std::string userYearString;

    // get the userYearString and display message

    std::cout << "This program will ask the user for their ";
    std::cout << "year and it will tell them ";
    std::cout << "if it is a leap year or not.";
    std::cout << "\nEnter your year: ";
    std::cin >>
        userYearString;

    // Try catch statement

    try {
        // Convert userYearString to int

        int userYearInt = std::stoi(userYearString);

        // Calculate remainder to determine if it's a leap year
        int leapYear4 = userYearInt % 4;
        int leapYear100 = userYearInt % 100;
        int leapYear400 = userYearInt % 400;

        // Check if leapYear4 leaves a remainder
        if (leapYear4 == 0) {
            // Check if leapYear100 does not leave a remainder
            if (leapYear100 != 0) {
                std::cout << userYearInt << " is a leap year.";
            } else {
                // Check if leapYear400 leaves a remainder
                if (leapYear400 == 0) {
                    std::cout << userYearInt << " is a leap year.";
                } else {
                    std::cout << 4 - leapYear4
                    << " years until the next leap year.";
                }
            }
        } else {
            std::cout << 4 - leapYear4 << " years until the next leap year.";
        }
    } catch (const std::invalid_argument& e) {
        // Display message to user if they entered something that is not valid
        std::cout << "\n"
                  << userYearString << " is not a valid year.";
    }
}
