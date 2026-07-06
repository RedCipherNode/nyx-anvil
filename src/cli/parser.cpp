#include "parser.h"

ParsedArguments ParseArguments(
    int argc,
    char *argv[])
{
    ParsedArguments arguments;

    if (argc > 1)
    {
        arguments.command = argv[1];
    }

    return arguments;
}