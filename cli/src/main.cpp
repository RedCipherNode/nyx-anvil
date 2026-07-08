#include <iostream>

#include <nyx/engine.hpp>

int main()
{
    nyx::Engine engine;

    if (!engine.initialize())
    {
        std::cerr << "Failed to initialize engine.\n";
        return 1;
    }

    std::cout << "Nyx-Anvil\n";

    return 0;
}