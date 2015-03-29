#include <iostream>
#include <vector>
#include <string>

#include "LoungeVCS.hpp"

void argparse(std::vector<std::string> args){
    for(auto &x : args){
        if(x == "-h" || x == "--help") std::cout<<"This is a help message...\n";
    }
}

int main(int argc, char* argv[]) {
    std::vector<std::string> args (argv, argv + argc);
    argparse(args);

    std::cout << "Lounge VCS v0.0.0.0" << '\n';

    for (auto const& arg : args) {
        std::cout << arg << '\n';
    }
}
