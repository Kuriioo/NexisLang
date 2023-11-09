#include <iostream>
#include <Liquid/VM/VM.hpp>


int main (int argc, char **argv)
{
  Liquid::VM vm {};
  vm.exit(5);
  return 0;
}
