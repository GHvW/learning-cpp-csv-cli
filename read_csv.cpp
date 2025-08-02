//
// Created by Garrett van Wageningen on 8/1/25.
//

#include "read_csv.hpp"

#include <sstream>
#include <fstream>


CSVRow read_row(const std::string& line) {
    CSVRow row;

    std::istringstream line_stream(line);

    std::string cell;
    while (std::getline(line_stream, cell, ',')) {
        row.push_back(cell);
    }

    return row;
}

CSVData read_csv(std::istream& csv_stream) {

    CSVData data;
    std::string line;
    while (std::getline(csv_stream, line)) {
        data.push_back(read_row(line));
    }

    return data;
}
