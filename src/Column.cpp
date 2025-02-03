#include "Column.h"
#include <iostream>

class SimpleColumn : public Column {
public:
    SimpleColumn(const std::string& columnName, DataType columnType, bool primaryKey = false, bool nullable = true)
        : Column(columnName, columnType, primaryKey, nullable) {}
};
