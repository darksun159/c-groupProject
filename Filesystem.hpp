#pragma once

#include <string>

namespace Lounge {
    namespace Filesystem {
        void createDirectory(std::string path);
        void fileCopy(std::string source, std::string destination);
    }
}