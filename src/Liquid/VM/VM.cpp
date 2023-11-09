#include <Liquid/VM/VM.hpp>
#include <iostream>

namespace Liquid
{
  void VM::exit(int code)
  {
    std::cout << "exit code " << code << std::endl;
  }
};
