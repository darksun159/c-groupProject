#include "Filesystem.hpp"

#include <Windows.h>

namespace Lounge {
    namespace Filesystem {
        void createDirectory(std::string path) {
            CreateDirectory(path.c_str(), NULL);
        }

        void fileCopy(std::string source, std::string destination) {
        	std::ifstream src(source, std::ios::binary);
        	std::ofstream dst(destination, std::ios::binary);

        	dst << src.rdbuf();
        }
    }
}