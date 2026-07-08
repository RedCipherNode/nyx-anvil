#include <nyx/configuration.hpp>
#include <nyx/engine.hpp>
#include <nyx/project.hpp>

namespace nyx
{

    bool Engine::initialize(const std::filesystem::path &projectRoot)
    {
        return Project::exists(projectRoot);
    }

    bool Engine::createProject(const std::filesystem::path &projectRoot)
    {
        if (!Project::create(projectRoot))
        {
            return false;
        }

        Configuration configuration;
        return configuration.save(projectRoot);
    }

    std::string Engine::loadConfiguration(const std::filesystem::path &projectRoot)
    {
        Configuration configuration;

        if (!configuration.load(projectRoot))
        {
            return {};
        }

        return configuration.content();
    }

}