#include <Kafe/VM/VM.hpp>
#include <iostream>

namespace Kafe
{
  void VM::exit(int code)
  {
    std::cout << "exit code " << code << std::endl;
  }
};
