#ifndef REGULAR_COMMANDS_H
#define REGULAR_COMMANDS_H

#include <iostream>

enum class RegularCommandTypes { SELECT, UPDATE, INSERT, DELETE };

class RegularCommand {
public:
    const char* command_string;

    virtual void execute_command() = 0;
    virtual ~RegularCommand() = default;
};

class InsertRegularCommand : public RegularCommand {
public:
    InsertRegularCommand();

    void execute_command() override;
};

class SelectRegularCommand : public RegularCommand {
public:
    SelectRegularCommand();

    void execute_command() override;
};

class UpdateRegularCommand : public RegularCommand {
public:
    UpdateRegularCommand();

    void execute_command() override;
};

class DeleteRegularCommand : public RegularCommand {
public:
    DeleteRegularCommand();

    void execute_command() override;
};

#endif
