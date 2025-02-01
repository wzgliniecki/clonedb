#include "MetaCommand.h"
#include "InputBuffer.h"

ExitCommand::ExitCommand() : Command(".exit") {
}

void ExitCommand::execute_command() {
    std::cout << "Executing exit command" << std::endl;
    InputBuffer& inputBuffer = InputBuffer::getInstance();
    inputBuffer.clearBuffer();
    exit(EXIT_SUCCESS);
}

PrintCommand::PrintCommand() : Command(".print") {
}


void PrintCommand::execute_command() {
    std::cout << "Executing print command" << std::endl;
}
