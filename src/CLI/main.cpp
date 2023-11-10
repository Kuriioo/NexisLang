/**
 * @file main.cpp
 * @author Kurio
*/

#include <Kafe/VM/VM.hpp>
#include <Kafe/Kafe.hpp>
#include <CLI/Repl.hpp>

#include <iostream>


int main (int argc, char **argv)
{
  int result { 0 };
  enum cmd_mode
  {
    COMPILE,
    REPL,
    NONE
  };
  cmd_mode mode { cmd_mode::NONE };
  const std::string arguments[] 
  {
    "--help", // show help message
    "-o",     // sets output file
    "-c",     // compile program
  };
  //TODO: catch arguments in the command
  switch (mode)
  {
    case cmd_mode::NONE:
    {
      std::printf(
       "Kafe Version %i.%i\n"
       "kafe --help \t; to show the help message.\n",
       KAFE_VERSION_MAJOR,
       KAFE_VERSION_MINOR
      );
      break;
    };
    case cmd_mode::COMPILE:
    {
      break;
    };
    case cmd_mode::REPL:
    {
      Kafe::Repl repl { };
      result = repl.run();    
      break;
    };
  };
  return result;
}
