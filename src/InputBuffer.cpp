#include "InputBuffer.h"
#include <iostream>

InputBuffer::InputBuffer() : buffer(nullptr), buffer_size(0) {}

InputBuffer::~InputBuffer() {
    if (buffer) {
        delete[] buffer;
    }
}

InputBuffer& InputBuffer::getInstance() {
    static InputBuffer instance;
    return instance;
}

void InputBuffer::allocateBuffer(size_t size) {
    buffer = new char[size];
    buffer_size = size;
}

void InputBuffer::read_input() {
    std::cin.getline(buffer, buffer_size);
}

void InputBuffer::clearBuffer() {
    if (buffer) {
        std::memset(buffer, 0, buffer_size);
    }
}
