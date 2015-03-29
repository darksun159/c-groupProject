#include "Filesystem.hpp"

#include <sys/stat.h>

namespace Lounge {
    namespace Filesystem {
        void createDirectory(std::string path) {
            mkdir(path.c_str(), S_IRWXU | S_IRWXG | S_IROTH | S_IXOTH);
        }
    }
}