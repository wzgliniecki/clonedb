#include <iostream>
#include <cstddef>
#include <cstring>
#include <cstdlib>

#include "InputBuffer.h"
#include "CommandParser.h"
#include "Constants.h"

void print_prompt();

void print_prompt() {
    std::cout << ProjectConstants::COMMAND_PROMPT;
}

int main(int argc, char *argv[]) {
    InputBuffer& inputBuffer = InputBuffer::getInstance();
    inputBuffer.allocateBuffer(100);

    CommandParser& commandParser = CommandParser::getInstance();

    while (true) {
        print_prompt();
        inputBuffer.read_input();

        commandParser.parse_command(inputBuffer.buffer);
    }

    return 0;
}
