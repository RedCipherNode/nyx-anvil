#include <iostream>

#include <nyx/engine.hpp>

int main()
{
    nyx::Engine engine;

    engine.initialize();

    std::cout << "Nyx-Anvil\n";

    return 0;
}