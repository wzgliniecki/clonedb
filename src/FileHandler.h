#ifndef FILE_HANDLER_H
#define FILE_HANDLER_H

#include <vector>
#include "Table.h"

class FileHandler {
public:
    const char* command_string;

    virtual ~FileHandler() = default;
    void save_table_to_file(std::string file_name, Table& table_to_save);

    static FileHandler& getInstance();
};

#endif
