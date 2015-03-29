#include "Filesystem.hpp"

#include <sys/stat.h>
#include <fstream>

namespace Lounge {
    namespace Filesystem {
        void createDirectory(std::string path) {
            mkdir(path.c_str(), S_IRWXU | S_IRWXG | S_IROTH | S_IXOTH);
        }

        void fileCopy(std::string source, std::string destination) {
        	std::ifstream src(source, std::ios::binary);
        	std::ofstream dst(destination, std::ios::binary);

        	dst << src.rdbuf();
        }
    }
}