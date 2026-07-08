#include <nyx/configuration_parser.hpp>

namespace nyx
{

    bool ConfigurationParser::load(
        const std::filesystem::path &,
        ConfigurationModel &model)
    {
        model.configVersion = 1;

        return true;
    }

}