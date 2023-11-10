/**
 * @file main.cpp
 * @author Kurio
*/

#include <Kafe/VM/VM.hpp>
#include <CLI/Repl.hpp>

#include <iostream>


int main (int argc, char **argv)
{
  int result { 0 };
  /*std::string file;
  Kafe::VM vm {};
  result = vm.run();*/
  Kafe::Repl repl { };
  result = repl.run();
   
  return result;
}
