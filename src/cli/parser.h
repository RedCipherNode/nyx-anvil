#pragma once

#include <string>

struct ParsedArguments
{
    std::string command;
};

ParsedArguments ParseArguments(
    int argc,
    char *argv[]);