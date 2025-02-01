#ifndef COMMAND_H
#define COMMAND_H

class Command {
public:
    const char* command_string;

    virtual ~Command() = default;
    virtual void execute_command() = 0;

    Command(const char* cmd) : command_string(cmd) {}
};

#endif
