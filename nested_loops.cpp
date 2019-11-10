// Copyright (c) 2019 Trinity Armstrong All rights reserved.
//
// Created by: Trinity Armstrong
// Created on: October 2019
// This program outputs all integers between 1000 - 2000 (5 int/line)

#include <iostream>

int main() {
    // This function outputs all integers between 1000 - 2000  (5 int/line)

    // variables
    int counter;

    // process
    for (counter = 1000; counter <= 2000; counter++) {
        std::cout << counter << " ";
        if (counter % 5 == 4) {
            std::cout << " " << std::endl;
        }
    }
}
