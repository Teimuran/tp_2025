#include <iostream>
#include <vector>
#include <iterator>
#include <algorithm>
#include <limits>

#include "DataStruct.hpp"

using namespace tarasov;


int main() {
    std::vector<DataStruct> data;
    while (!std::cin.eof()) {
        std::copy(
            std::istream_iterator<DataStruct>(std::cin),
            std::istream_iterator<DataStruct>(),
            std::back_inserter(data)
        );
        if (!std::cin.fail()) {
            continue;
        }
        std::cin.clear();
        std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
    }
    std::sort(data.begin(), data.end());
    std::copy(
        data.begin(),
        data.end(),
        std::ostream_iterator<DataStruct>(std::cout, "\n")
    );
    return 0;
}
