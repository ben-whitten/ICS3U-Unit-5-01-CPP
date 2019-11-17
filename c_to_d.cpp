// Copyright (c) 2019 St. Mother Teressa HS All rights reserved.
//
// Created by: Ben Whitten
// Created on: November 2019
// This is a program which converts degrees from celcius to fahrenheit.

#include <iostream>
#include <cstdlib>


int celcius;
int fahrenheit;

void calculationArea() {
    // This is what runs the program.
    std::string celciusAsString;
    // Process
    while (true) {
        std::cout << "Input a temperature in degrees celcius: ";
        std::cin >> celciusAsString;
        std::cout << "" << std::endl;

        try {
            celcius = std::stoi(celciusAsString);
            break;
        } catch (std::invalid_argument) {
        std::cout << "That was not a positive and/or whole number."
        << std::endl;
        }
    }
}

void calculations() {
    fahrenheit = ((9/5)*celcius + 32);
    std::cout << fahrenheit << " degrees fahrenheit." << std::endl;
}

main() {
    // this function just calls other functions
    // call functions
    calculationArea();
    calculations();
}
