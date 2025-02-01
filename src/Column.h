#ifndef COLUMN_H
#define COLUMN_H

#include <string>

enum class DataType {
    Integer,
    Float,
    String,
    Date,
    Boolean,
};


class Column {
public:
    std::string name;
    DataType data_type;
    bool isPrimaryKey;
    bool isNullable;

    virtual ~Column() = default;
    virtual void execute_command() = 0;

    Column(const std::string& columnName, DataType columnType, bool primaryKey = false, bool nullable = true)
        : name(columnName), data_type(columnType), isPrimaryKey(primaryKey), isNullable(nullable) {}
};

#endif
