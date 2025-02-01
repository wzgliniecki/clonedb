#include "MetaCommand.h"
#include "InputBuffer.h"
#include "Constants.h"

ExitCommand::ExitCommand() : Command(".exit") {
}

void ExitCommand::execute_command() {
    std::cout << ProjectConstants::COMMAND_EXIT_RESULT << std::endl;
    InputBuffer& inputBuffer = InputBuffer::getInstance();
    inputBuffer.clearBuffer();
    exit(EXIT_SUCCESS);
}

PrintCommand::PrintCommand() : Command(".print") {
}


void PrintCommand::execute_command() {
    std::cout << "Executing print command" << std::endl;
}
