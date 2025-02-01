#ifndef INPUT_BUFFER_H
#define INPUT_BUFFER_H

#include <cstring>

class InputBuffer {
public:
    char* buffer;

    static InputBuffer& getInstance();

    void allocateBuffer(size_t size);

    void clearBuffer();

    void read_input();

    ~InputBuffer();

private:
    InputBuffer();

    InputBuffer(const InputBuffer&) = delete;
    InputBuffer& operator=(const InputBuffer&) = delete;

    size_t buffer_size;
};

#endif
