// Copyright(c) 2022 Ioana Marinescu All rights reserved.
// Created By: Ioana Marinescu

// Date: Oct. 3, 2022
// calculates area and perimeter of an octagon

#include <cmath>
#include <iomanip>
#include <iostream>

int main() {
    // variables
    std::string units;
    float sideLength, area, perimeter;

    // user input
    std::cout << "Enter units (cm, inches, mm, etc.): ";
    std::cin >> units;
    std::cout << "Enter side length: ";
    std::cin >> sideLength;

    // calculations
    area = 2 * (1 + 2) * pow(sideLength, 2);
    perimeter = 8 * sideLength;

    // displays results
    std::cout << "Area: " << std::fixed << std::setprecision(2);
    std::cout << area << units << "^2" << std::endl;
    std::cout << "Perimeter: " << std::fixed << std::setprecision(2);
    std::cout << perimeter << units << std::endl;
}
