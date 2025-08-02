//
// Created by Garrett van Wageningen on 8/1/25.
//

#include "print_csv.hpp"

#include <iostream>
#include <ostream>

void print_csv(const CSVData& csv) {
    for (const auto &row : csv) {
        for (const auto &cell : row) {
            std::cout << cell << std::endl;
        }
    }
}
