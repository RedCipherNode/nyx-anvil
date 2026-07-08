#pragma once

#include <filesystem>

namespace nyx
{

    class Engine
    {
    public:
        bool initialize(const std::filesystem::path &projectRoot);

        bool createProject(const std::filesystem::path &projectRoot);
    };

}