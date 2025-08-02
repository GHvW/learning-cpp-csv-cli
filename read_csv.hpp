//
// Created by Garrett van Wageningen on 8/1/25.
//
// This ifndef-define-endif prevents multiple inclusion of the header in one compile.
#ifndef READ_CSV_HPP
#define READ_CSV_HPP

#include <vector>
#include <string>

using CSVRow = std::vector<std::string>;
using CSVData = std::vector<CSVRow>;

CSVData read_csv(std::istream& csv_stream);

#endif //READ_CSV_HPP
