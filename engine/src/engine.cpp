#include <nyx/engine.hpp>
#include <nyx/project.hpp>

namespace nyx
{

    bool Engine::initialize(const std::filesystem::path &projectRoot)
    {
        return Project::exists(projectRoot);
    }

}