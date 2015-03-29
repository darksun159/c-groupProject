#include "Filesystem.hpp"
#include <fstream>

namespace Lounge {
    namespace Filesystem {
    	void fileCopy(std::string source, std::string destination) {
        	std::ifstream src(source, std::ios::binary);
        	std::ofstream dst(destination, std::ios::binary);

        	dst << src.rdbuf();
        }
    }
}