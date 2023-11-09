#ifndef _LIQUID_VM_HPP_
#define _LIQUID_VM_HPP_


#include <Liquid/VM/Value.hpp>


namespace Liquid
{
  class VM
  {
  public:
    int run();
    void exit(int code);
  private:
    void init();
    Value *pop();
    Value *push();
  };
};


#endif
