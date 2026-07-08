#pragma once

#include <filesystem>
#include <string>
#include <vector>

#include <nyx/protection.hpp>

namespace nyx
{

    struct ConfigurationModel
    {
        int configVersion = 0;

        std::vector<Protection> protections;
    };

}