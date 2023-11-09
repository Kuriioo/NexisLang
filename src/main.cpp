#include <iostream>
#include <Kafe/VM/VM.hpp>


int main (int argc, char **argv)
{
  Kafe::VM vm {};
  vm.exit(5);  
  return 0;
}
