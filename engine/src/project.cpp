#include <fstream>

#include <nyx/constants.hpp>
#include <nyx/project.hpp>

namespace fs = std::filesystem;

namespace nyx
{

    bool Project::exists(const fs::path &root)
    {
        return fs::exists(root / ProjectFile);
    }

    bool Project::create(const fs::path &root)
    {
        if (exists(root))
        {
            return false;
        }

        std::ofstream file(root / ProjectFile);

        if (!file)
        {
            return false;
        }

        file << "version = 1\n";

        return true;
    }

}