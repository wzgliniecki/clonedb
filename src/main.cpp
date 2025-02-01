#include <iostream>
#include <cstddef>
#include <cstring>
#include <cstdlib>

#include "RegularCommand.h"
#include "MetaCommand.h"
#include "InputBuffer.h"

void print_prompt();

void print_prompt() {
    std::cout << "clonedb $ ";
}

int main(int argc, char *argv[]) {
    InputBuffer& inputBuffer = InputBuffer::getInstance();
    inputBuffer.allocateBuffer(100);

    while (true) {
        print_prompt();
        inputBuffer.read_input();

        if (strcmp(inputBuffer.buffer, ".exit") == 0) {
            inputBuffer.clearBuffer();
            exit(EXIT_SUCCESS);
        } else {
            std::cout << "Unrecognized command '" << inputBuffer.buffer << "'.\n";
        }
    }

    return 0;
}
