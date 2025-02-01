
#ifndef COMMAND_PARSER_H
#define COMMAND_PARSER_H

#include <iostream>
#include <unordered_map>
#include <memory>


#include "RegularCommand.h"
#include "MetaCommand.h"
#include "Command.h"

class CommandParser {
public:
    std::unordered_map<std::string, std::unique_ptr<Command>> possibleCommands;

    static CommandParser& getInstance();

    void parse_command(const char* command);
    void initialize_commands();

private:
    CommandParser();
};

#endif
