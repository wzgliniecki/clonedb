#include "Table.h"
#include <iostream>

Table::Table(const std::string& name) : name(name) {}

void Table::addColumn(const Column& column) {
    columns.push_back(column);
}

void Table::dropColumn(const std::string& columnName) {
    ;
}
