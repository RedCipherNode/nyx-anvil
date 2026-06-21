#include "cli.h"

#include <iostream>

int RunCLI(int argc, char *argv[])
{
    std::cout << "Nyx Anvil\n";
    std::cout << "Pre-Alpha\n\n";

    std::cout << "Usage:\n";
    std::cout << "  nyx-anvil <command>\n\n";

    std::cout << "Commands:\n";
    std::cout << "  help\n";
    std::cout << "  version\n";

    return 0;
}