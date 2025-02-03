#ifndef TABLE_H
#define TABLE_H

#include <string>
#include <vector>
#include <Column.h>

class Table {
public:
    std::string name;
    std::vector<Column> columns;

    Table(const std::string& name);

    void addColumn(const Column& column);
    void dropColumn(const std::string& columnName);
};

#endif
