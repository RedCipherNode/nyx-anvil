#pragma once

#include <filesystem>
#include <string>

namespace nyx
{

    class Configuration
    {
    public:
        bool load(const std::filesystem::path &root);

        const std::string &content() const;

    private:
        std::string content_;
    };

}