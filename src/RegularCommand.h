#ifndef REGULAR_COMMAND_H
#define REGULAR_COMMAND_H

#include <iostream>
#include "Command.h"

class InsertRegularCommand : public Command {
public:
    InsertRegularCommand();

    void execute_command() override;
};

class SelectRegularCommand : public Command {
public:
    SelectRegularCommand();

    void execute_command() override;
};

class UpdateRegularCommand : public Command {
public:
    UpdateRegularCommand();

    void execute_command() override;
};

class DeleteRegularCommand : public Command {
public:
    DeleteRegularCommand();

    void execute_command() override;
};

#endif
