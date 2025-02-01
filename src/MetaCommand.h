#ifndef META_COMMAND_H
#define META_COMMAND_H

#include <iostream>
#include "Command.h"

class ExitCommand : public Command {
public:
    ExitCommand();

    void execute_command() override;
};

class PrintCommand : public Command {
public:
    PrintCommand();

    void execute_command() override;
};

#endif
