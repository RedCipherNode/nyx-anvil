#pragma once

#include <filesystem>

namespace nyx
{

    class Project
    {
    public:
        static bool exists(const std::filesystem::path &root);
    };

}