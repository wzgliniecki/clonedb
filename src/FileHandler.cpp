#include "FileHandler.h"
#include <iostream>
#include <fstream>
#include <string>

FileHandler& FileHandler::getInstance() {
    static FileHandler instance;
    return instance;
}

void FileHandler::save_table_to_file(std::string file_name, Table& table_to_save){
    std::ofstream outFile(file_name);

        if (outFile.is_open()) {
            outFile << table_to_save.name;

            outFile.close();
            std::cout << "Table dumped to: " << file_name << std::endl;
    } else {
        std::cerr << "Error: File cannot be opened!" << std::endl;
    }

};
