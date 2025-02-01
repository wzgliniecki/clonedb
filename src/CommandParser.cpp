#include "CommandParser.h"
#include "MetaCommand.h"
#include "RegularCommand.h"
#include "Constants.h"

void CommandParser::initialize_commands() {
    possibleCommands[".exit"] = std::make_unique<ExitCommand>();
    possibleCommands[".print"] = std::make_unique<PrintCommand>();
    
    possibleCommands["SELECT"] = std::make_unique<SelectRegularCommand>();
    possibleCommands["INSERT"] = std::make_unique<InsertRegularCommand>();
    possibleCommands["DELETE"] = std::make_unique<DeleteRegularCommand>();
    possibleCommands["UPDATE"] = std::make_unique<UpdateRegularCommand>();
}

CommandParser::CommandParser() {
    initialize_commands();
}

CommandParser& CommandParser::getInstance() {
    static CommandParser instance;
    return instance;
}

void CommandParser::parse_command(const char* command) {
    auto it = possibleCommands.find(command);
    if (it != possibleCommands.end()) {
        it->second->execute_command();
    } else {
        std::cout << ProjectConstants::ERROR_INVALID_COMMAND << command << std::endl;
    }
}
