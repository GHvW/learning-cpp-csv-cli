//
// Created by Garrett van Wageningen on 7/30/25.
//
#include <iostream>
#include <fstream>
#include <string>

#include "print_csv.hpp"
#include "read_csv.hpp"

int main(const int argc, char* argv[]) {
    if (argc != 2) {
        std::cerr << "Usage: " << argv[0] << " <filename>" << std::endl;
        return 1;
    }

    const std::string_view program_name = argv[0];
    // const std::string_view input_filename = argv[1];
    const std::string input_filename = argv[1];

    std::cout << "This is " << program_name << " reading " << input_filename << std::endl;

    // same as
    // std::ifstream file;
    // file.open(csv_filename);
    // ?
    std::ifstream file(input_filename); // "direct initialization" simultaneously inits a variable and opens the file
    if (!file) {
        std::cerr << "Failed to open file: " << argv[1] << std::endl;
        return 1;
    }

    const CSVData data = read_csv(file);

    print_csv(data);

    return 0;
}
