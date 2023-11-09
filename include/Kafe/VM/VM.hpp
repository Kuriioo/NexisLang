#ifndef _KAFE_VM_HPP_
#define _KAFE_VM_HPP_


#include <Kafe/VM/Value.hpp>


namespace Kafe
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
