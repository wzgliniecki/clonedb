#include "MetaCommand.h"

ExitCommand::ExitCommand() {
    command_string = ".exit";
}

void ExitCommand::execute_command() {
    std::cout << "Executing exit command" << std::endl;
}

PrintCommand::PrintCommand() {
    command_string = ".print";
}

void PrintCommand::execute_command() {
    std::cout << "Executing print command" << std::endl;
}
