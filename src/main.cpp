#include <iostream>
#include <cstddef>
#include <cstring>
#include <cstdlib>

#include "RegularCommand.h"
#include "MetaCommand.h"

void print_prompt();

class InputBuffer {
public:
    char* buffer;
    size_t buffer_length;
    ssize_t input_length;

    InputBuffer() 
        : buffer(nullptr), buffer_length(0), input_length(0) {}

    ~InputBuffer() {
        delete[] buffer;
    }

    void allocateBuffer(size_t length) {
        buffer = new char[length];
        buffer_length = length;
    }

    void setInputLength(ssize_t length) {
        input_length = length;
    }

    static InputBuffer* new_input_buffer() {
        return new InputBuffer();
    }

    void read_input() {
        ssize_t bytes_read = getline(&buffer, &buffer_length, stdin);

        if (bytes_read <= 0) {
            std::cerr << "Error reading input\n";
            exit(EXIT_FAILURE);
        }

        input_length = bytes_read - 1;
        buffer[bytes_read - 1] = '\0';
    }
};

void print_prompt() {
    std::cout << "clonedb $ ";
}

int main(int argc, char *argv[]) {
    InputBuffer* input_buffer = InputBuffer::new_input_buffer();
    input_buffer->allocateBuffer(1024);
    while (true) {
        print_prompt();
        input_buffer->read_input();

        if (strcmp(input_buffer->buffer, ".exit") == 0) {
            delete input_buffer;
            exit(EXIT_SUCCESS);
        } else {
            std::cout << "Unrecognized command '" << input_buffer->buffer << "'.\n";
        }
    }

    return 0;
}
