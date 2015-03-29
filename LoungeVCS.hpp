#pragma once
#include <set>
#include <map>

namespace Lounge {

    static const char* vcsDir = ".lounge";

    using Path = std::string;
    using RevisionNumber = int;

    using RepoRevision = std::map<Path, RevisionNumber>;
    using Index = std::map<RevisionNumber, RepoRevision>;

    class Vcs {
    private:
        Index index;

    public:
        // TODO
        void loadIndex();

        // TODO
        void saveIndex();

        // TODO
        /// Initializes the vcs dir 
        void init();

        // TODO
        /// Copies the appropriate file revision to the working dir
        void checkoutFile(Path path, RevisionNumber revision) const;

        // TODO
        /// Checkouts the whole working copy
        void checkout(RevisionNumber revision);

        // TODO
        /// Copies the appropriate file to the vcs dir with an incremented number
        void commit(Path path, RevisionNumber revision);
    };
}