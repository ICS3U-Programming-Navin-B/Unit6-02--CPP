// Copyright (c) 2022Navin BalekomeboleAll rights reserved.
// Created by: Navin Balekomebole
// Created on: Feb 3 2022
// This program uses an array as a parameter

#include <iostream>
#include <maxValue.h>
#include <array>


template<size_t N>
int SumOfNumbers(std::array<int, N> listOfNumbers) {
    // this functions add up all the numbers in the list

    int total = 0;

    for (int counter = 0; counter < listOfNumbers.size(); counter++) {
        total += listOfNumbers[counter];
    }

    return total;
}

main() {
    // this function uses an array

    std::array<int, 10> randomNumbers;
    int aSingleRandomNumber = 0;
    int sum = 0;

    srand(time(NULL));

    // input
    std::cout << "The numbers are: ";
    for (int loop_counter = 0; loop_counter < 10; loop_counter++) {
        aSingleRandomNumber = (rand_r() % 10) + 1;
        randomNumbers[loop_counter] = aSingleRandomNumber;
        std::cout << aSingleRandomNumber << ", ";
    }
    std::cout << " " << std::endl;

    sum = SumOfNumbers(randomNumbers);

    std::cout << "The sum of all the numbers is: " << sum << std::endl;
}
