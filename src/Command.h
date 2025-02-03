#ifndef COMMAND_H
#define COMMAND_H

#include <string>

class Command {
public:
    const char* command_string;

    virtual ~Command() = default;
    virtual void execute_command() = 0;

    Command(const char* cmd) : command_string(cmd), payload("") {}

    std::string get_payload() { return payload; }

    void set_payload(std::string new_payload) {
        if (!new_payload.empty()) {
            payload = new_payload;
        } else {
            payload = "";
        }
    }

private:
    std::string payload;
};

#endif
