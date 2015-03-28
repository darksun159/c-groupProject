#include <iostream>
#include <vector>
#include <string>

#include "LoungeVCS.hpp"

int main(int argc, char* argv[]) {
    std::vector<std::string> args (argv, argv + argc);

    std::cout << "Lounge VCS v0.0.0.0" << '\n';

    for (auto const& arg : args) {
        std::cout << arg << '\n';
    }
}