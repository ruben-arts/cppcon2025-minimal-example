#include <boost/algorithm/string.hpp>
#include <iostream>
#include <string>
#include <vector>

int main() {
    std::string str = "Hello,World,This,Is,C++17";
    std::vector<std::string> result;

    boost::split(result, str, boost::is_any_of(","));

    std::cout << "Splitted strings:\n";
    for (const auto& s : result) {
        std::cout << s << "\n";
    }

    return 0;
}