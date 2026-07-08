#pragma once

#include <filesystem>
#include <string>

namespace nyx
{

    struct ConfigurationModel
    {
        const ConfigurationModel &model() const;
    };

    class Configuration
    {
    public:
        bool load(const std::filesystem::path &root);
        bool save(const std::filesystem::path &root);

        int configVersion() const;

        const std::string &content() const;

    private:
        ConfigurationModel model_;
        std::string content_;
    };

}