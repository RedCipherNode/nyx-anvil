#pragma once

#include <filesystem>

#include <nyx/configuration.hpp>

namespace nyx
{

    class ConfigurationParser
    {
    public:
        bool load(const std::filesystem::path &root,
                  ConfigurationModel &model);
    };

}