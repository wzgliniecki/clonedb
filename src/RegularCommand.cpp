#include "RegularCommand.h"

InsertRegularCommand::InsertRegularCommand() {
    command_string = ".insert";
}

void InsertRegularCommand::execute_command() {
    std::cout << "Executing Insert command" << std::endl;
}

SelectRegularCommand::SelectRegularCommand() {
    command_string = ".select";
}

void SelectRegularCommand::execute_command() {
    std::cout << "Executing Select command" << std::endl;
}

UpdateRegularCommand::UpdateRegularCommand() {
    command_string = ".update";
}

void UpdateRegularCommand::execute_command() {
    std::cout << "Executing Update command" << std::endl;
}

DeleteRegularCommand::DeleteRegularCommand() {
    command_string = ".delete";
}

void DeleteRegularCommand::execute_command() {
    std::cout << "Executing Delete command" << std::endl;
}
