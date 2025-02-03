#include "RegularCommand.h"

#include "Column.h"
#include "Table.h"
#include "FileHandler.h"

InsertRegularCommand::InsertRegularCommand() : Command("Insert") {
}

void InsertRegularCommand::execute_command() {
    std::cout << "Executing Insert command" << std::endl;
}

SelectRegularCommand::SelectRegularCommand() : Command("Select") {
}

void SelectRegularCommand::execute_command() {
    std::cout << "Executing Select command" << std::endl;
}

UpdateRegularCommand::UpdateRegularCommand() : Command("Update") {
}

void UpdateRegularCommand::execute_command() {
    std::cout << "Executing Update command" << std::endl;
}

DeleteRegularCommand::DeleteRegularCommand() : Command("Delete") {
}

void DeleteRegularCommand::execute_command() {
    std::cout << "Executing Delete command" << std::endl;
}

CreateTableCommand::CreateTableCommand() : Command("Create") {
}

void CreateTableCommand::execute_command() {
    std::cout << "Executing Create Table command" << std::endl;
    if (!get_payload().empty()){
        Table table =  Table(get_payload());
        FileHandler& fileHandler = FileHandler::getInstance();
        fileHandler.save_table_to_file("test.txt", table);
    }
    else{
        std::cout<< "Invalid arguments for command Create Table"<<std::endl;
    }
}
