#ifndef APPLICATION_LOGIC_
#define APPLICATION_LOGIC_

#include "Argument.h"
#include <iostream>

class ApplicationLogic {
private:
  Argument* argument;
public:
  ApplicationLogic();
  void run(int argc, char** argv);
};

#endif // !APPLICATION_LOGIC_
