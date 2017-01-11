#include "Argument.h"
#include "FileOperations.h"
#include <iostream>
#include <string>

Argument::Argument(int argc, char ** argv, FileOperation fileOp)
{
  this->argc = argc;
  this->argv = argv;
  this->fileOp = fileOp;
}

Argument::~Argument()
{
}

void Argument::set_arguments_and_file_names() throw (std::string) {
  if (argc == 1) {
    throw "No filename is provided.";
  }
  else if (argc == 2) {
    std::string file_name = argv[1];
    fileOp.set_input_file_name(file_name);
  }
  else if (argc == 3) {
    std::string command1 = argv[2];
  }
  else if (argc == 4) {
    if (command1 == "-s") {
      int size = (int)argv[3];
      fileOp.set_shift_size(size);
    }
    else if (command1 == "-o") {
      std::string file_name = argv[3];
      fileOp.set_output_file_name(file_name);
    }
    else {
      throw "wrong command";
    }
  }
  else if (argc == 5) {
    std::string command2 = argv[4];
  }
  else if (argc == 6) {
    if (command2 == "-s") {
      int size = (int)argv[5];
      fileOp.set_shift_size(size);
    }
    else if (command2 == "-o") {
      std::string file_name = argv[5];
      fileOp.set_output_file_name(file_name);
    }
    else {
      throw "wrong command";
    }
  }
}
