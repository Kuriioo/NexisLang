/**
 * @file main.cpp
 * @author Kurio
*/

#include <clipp.h>

#include <Kafe/VM/VM.hpp>
#include <Kafe/Kafe.hpp>
#include <CLI/Repl.hpp>

#include <iostream>
#include <cstring>


int main (int argc, char **argv)
{
  using namespace clipp;
  int result { 0 };
  enum class mode
  {
    compile,
    repl,
    help
  };
  mode select { mode::repl };
  std::string output;
  auto cli = (
        option("-H", "--help").set(select, mode::help).doc("Display help message."),
        option("-o") & value("output format", output)
    );
  auto fmt = doc_formatting {}
    .first_column(8)
    .doc_column(30)
    .indent_size(2)
    .split_alternatives(true)
    .merge_alternative_flags_with_common_prefix(true);
  if (parse(argc, argv, cli))
  {
    switch (select)
    {
      case mode::help:
      {
        std::cout << "help\n";
        break; 
      };
      case mode::compile:
      {
        break;
      };
      case mode::repl:
      {
        Kafe::Repl repl { };
        result = repl.run();    
        break;
      };
    };
  };
  return result;
}
