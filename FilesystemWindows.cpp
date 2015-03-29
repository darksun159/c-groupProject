#include "Filesystem.hpp"

#include <Windows.h>

namespace Lounge {
    namespace Filesystem {
        void createDirectory(std::string path) {
            CreateDirectory(path.c_str(), NULL);
        }
    }
}