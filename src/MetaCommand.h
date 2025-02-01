#ifndef META_COMMANDS_H
#define META_COMMANDS_H

#include <iostream>

enum class MetaCommandTypes {
    EXIT = 0,
    PRINT = 1
};

class MetaCommand {
public:
    const char* command_string;

    virtual ~MetaCommand() = default;
    virtual void execute_command() = 0;
};

class ExitCommand : public MetaCommand {
public:
    ExitCommand();

    void execute_command() override;
};

class PrintCommand : public MetaCommand {
public:
    PrintCommand();

    void execute_command() override;
};

#endif
