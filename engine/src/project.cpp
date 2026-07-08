#include <nyx/project.hpp>

namespace fs = std::filesystem;

namespace nyx
{

    bool Project::exists(const fs::path &root)
    {
        return fs::exists(root / "nyx.toml");
    }

}