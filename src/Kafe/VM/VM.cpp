/**
 * @file VM.cpp 
 * @author Kurio
*/

#include <Kafe/VM/VM.hpp>


#include <iostream>


namespace Kafe
{
  void VM::init()
  {
   std::cout << "VM INIT\n"; 
  };
  void VM::exit(int code)
  {
    m_exit_code = code;
  };
  int VM::run()
  {
    init();
    return m_exit_code;
  };
};
