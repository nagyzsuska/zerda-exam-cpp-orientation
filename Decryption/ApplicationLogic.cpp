#include "ApplicationLogic.h"
#include "FileOperations.h"
#include <iostream>


ApplicationLogic::ApplicationLogic()
{
  
}

void ApplicationLogic::run(int argc, char** argv)
{
  FileOperation fileOp;
  Argument argument(argc, argv, fileOp);
  argument.set_arguments_and_file_names();
  std::string text = fileOp.read_file_line_by_line_and_letter_by_letter_and_decrypt_the_text();
  fileOp.write_the_decrypted_text_to_a_file(text);
}
