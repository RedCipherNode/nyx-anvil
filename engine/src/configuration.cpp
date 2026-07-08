#include <fstream>
#include <sstream>

#include <nyx/configuration.hpp>

namespace fs = std::filesystem;

namespace nyx
{

    bool Configuration::load(const fs::path &root)
    {
        std::ifstream file(root / "nyx.toml");

        if (!file)
        {
            return false;
        }

        std::ostringstream buffer;
        buffer << file.rdbuf();

        content_ = buffer.str();

        return true;
    }

    const std::string &Configuration::content() const
    {
        return content_;
    }

}