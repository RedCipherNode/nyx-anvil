#include <filesystem>

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
        return !exists(root);
    }

}