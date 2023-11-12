/**
 * @file VM.cpp 
 * @author Kurio
*/

#include <Nexis/VM/VM.hpp>


#include <iostream>


namespace Nexis
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
