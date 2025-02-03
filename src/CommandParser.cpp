#include <string>

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
    possibleCommands["CREATE"] = std::make_unique<CreateTableCommand>();
}

CommandParser::CommandParser() {
    initialize_commands();
}

CommandParser& CommandParser::getInstance() {
    static CommandParser instance;
    return instance;
}

std::string trimLeadingWhitespace(const std::string& str) {
    size_t start = 0;
    while (start < str.size() && std::isspace(str[start])) {
        ++start;
    }
    return str.substr(start);
}

std::string getCommandString(const std::string& str) {
    std::string trimmed = trimLeadingWhitespace(str);
    size_t firstSpace = trimmed.find(" ");
    return (firstSpace == std::string::npos) ? trimmed : trimmed.substr(0, firstSpace);
}

std::string getPayloadString(const std::string& str) {
    std::string trimmed = trimLeadingWhitespace(str);
    size_t firstSpace = trimmed.find(" ");
    return (firstSpace == std::string::npos) ? "" : trimmed.substr(firstSpace + 1);
}
void CommandParser::parse_command(const char* command) {
    std::string parsedCommand = getCommandString(command);
    std::string payload = getPayloadString(command);
    auto it = possibleCommands.find(parsedCommand);
    if (it != possibleCommands.end()) {
        it->second->set_payload(payload);
        it->second->execute_command();
    } else {
        std::cout << ProjectConstants::ERROR_INVALID_COMMAND << command << std::endl;
    }
}
