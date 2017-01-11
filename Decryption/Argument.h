#ifndef ARGUMENT_
#define ARGUMEMT_
#include <string>
#include "FileOperations.h"

class  Argument
{
private:
  int argc;
  char** argv;
  std::string command1;
  std::string command2;
  FileOperation fileOp;
public:
   Argument(int argc, char** argv, FileOperation fileOp);
  ~ Argument();
  void set_arguments_and_file_names() throw (std::string);
};

#endif // !ARGUMENT_

