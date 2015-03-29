#define CATCH_CONFIG_MAIN
#include "deps/catch.hpp"

#include "LoungeVCS.hpp"

enum class FileStatus { File, Directory, Nonexistent };
FileStatus getFileStatus(std::string const& path);

TEST_CASE("Folder is initialized", "[init]") {
    Lounge::Vcs vcs;
    vcs.init();

    REQUIRE(getFileStatus(".lounge") == FileStatus::Directory);
}

#include <sys/types.h>
#include <sys/stat.h>

FileStatus getFileStatus(std::string const& path) {
    struct stat info;

    if (stat(path.c_str(), &info) != 0) {
        printf("cannot access %s\n", path.c_str());
        return FileStatus::Nonexistent;
    }
    else if (info.st_mode & S_IFDIR) {
        printf("%s is a directory\n", path.c_str());
        return FileStatus::Directory;
    }
    else {
        printf("%s is no directory\n", path.c_str());
        return FileStatus::File;
    }
}