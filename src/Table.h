#ifndef TABLE_H
#define TABLE_H

#include <string>
#include <vector>

#include <Column.h>

class Table {
public:
    std::string name;
    std::vector<Column> columns;

    Table(const std::string& name) : name(name) {}

    void addColumn(const Column& column) {
        columns.push_back(column);
    }
};

#endif
