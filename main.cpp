//
// Created by Garrett van Wageningen on 7/30/25.
//
#include <iostream>

int main(const int argc, char* argv[]) {
    if (argc != 2) {
        std::cerr << "Usage: " << argv[0] << " <filename>" << std::endl;
        return 1;
    }

    const std::string_view program_name = argv[0];
    const std::string_view input_filename = argv[1];

    std::cout << "This is " << program_name << " reading " << input_filename << std::endl;

    return 0;
}