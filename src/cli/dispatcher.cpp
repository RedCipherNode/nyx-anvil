#include "dispatcher.h"

#include <iostream>

void Dispatch(
    const ParsedArguments &arguments)
{
    std::cout
        << "Command: "
        << arguments.command
        << '\n';
}