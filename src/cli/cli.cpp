#include "cli.h"

#include "parser.h"
#include "dispatcher.h"

void RunCLI(
    int argc,
    char *argv[])
{
    ParsedArguments arguments =
        ParseArguments(
            argc,
            argv);

    Dispatch(
        arguments);
}