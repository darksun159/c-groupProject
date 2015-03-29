#include <iostream>
#include <vector>
#include <string>

#include "LoungeVCS.hpp"

void argparse(vecter<std::string>);

int main(int argc, char* argv[]) {
    std::vector<std::string> args (argv, argv + argc);
	argparse(args);

    std::cout << "Lounge VCS v0.0.0.0" << '\n';

    for (auto const& arg : args) {
        std::cout << arg << '\n';
    }
}

void argparse(vecter<std::string> args){
	for(int x = 0; x <= args.size(); x++){
		if(args[x] == "-h" || args[x] == "--help") std::cout<<"This is a help message...\n";
	}
}
