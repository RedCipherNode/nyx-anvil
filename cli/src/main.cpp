#include <filesystem>
#include <iostream>
#include <string>

#include <nyx/engine.hpp>

namespace fs = std::filesystem;

int main(int argc, char *argv[])
{
    if (argc < 2)
    {
        std::cout << "Nyx-Anvil\n";
        std::cout << "Usage: nyx <command>\n";
        return 0;
    }

    std::string command = argv[1];

    if (command == "version")
    {
        std::cout << "Nyx-Anvil\n";
        std::cout << "Version 0.1.0\n";
        return 0;
    }

    if (command == "doctor")
    {
        std::cout << "Not implemented.\n";
        return 0;
    }

    if (command == "init")
    {
        std::cout << "Not implemented.\n";
        return 0;
    }

    if (command == "protect")
    {
        nyx::Engine engine;

        if (!engine.initialize(fs::current_path()))
        {
            std::cerr << "nyx.toml not found.\n";
            return 1;
        }

        std::cout << "Nyx project found.\n";
        return 0;
    }

    std::cerr << "Unknown command: " << command << '\n';

    return 1;
}