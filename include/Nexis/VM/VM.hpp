/**
 * @file VM.hpp 
 * @author Kurio
*/

#ifndef _NEXIS_VM_HPP_
#define _NEXIS_VM_HPP_


#include <Nexis/VM/Value.hpp>


namespace Nexis
{
  class VM
  {
  public:
    int run();
    
    void exit(int code);
  private:
    int m_exit_code;
    
    void init();
    
    Value *pop();
    Value *push();
  };
};


#endif
