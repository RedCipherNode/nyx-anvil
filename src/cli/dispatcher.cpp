#include "dispatcher.h"

#include <iostream>

namespace
{
    void ShowHelp()
    {
        std::cout
            << "Nyx-Anvil\n\n"

            << "Usage:\n"
            << "    nyx-anvil <command>\n\n"

            << "Commands:\n"
            << "    help\n"
            << "    version\n"
            << "    transform\n";
    }

    void ShowVersion()
    {
        std::cout
            << "Nyx-Anvil\n"
            << "Version 0.1.0\n";
    }

    void ShowTransform()
    {
        std::cout
            << "Transform command is not implemented yet.\n";
    }
}

void Dispatch(
    const ParsedArguments &arguments)
{
    if (arguments.command.empty())
    {
        ShowHelp();
        return;
    }

    if (arguments.command == "help")
    {
        ShowHelp();
        return;
    }

    if (arguments.command == "version")
    {
        ShowVersion();
        return;
    }

    if (arguments.command == "transform")
    {
        ShowTransform();
        return;
    }

    std::cout
        << "Unknown command: "
        << arguments.command
        << "\n\n"

        << "Run 'nyx-anvil help' "
        << "for available commands.\n";
}