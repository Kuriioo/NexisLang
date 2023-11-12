/**
 * @file main.cpp
 * @author Kurio
*/

#include <clipp.h>

#include <Nexis/VM/VM.hpp>
#include <Nexis/Nexis.hpp>
#include <CLI/Repl.hpp>
#include <Nexis/Compiler/Lexer.hpp>

#include <cstdint>
#include <filesystem>
#include <fstream>
#include <iostream>


int main (int argc, char **argv)
{
  using namespace clipp;
  int result { 0 };
  enum class mode
  {
    REPL,
    HELP
  };
  mode select { mode::REPL };
  bool buildDebug { true };
  std::string file, output;
  auto cli = (
        option("-H", "--help").set(select, mode::HELP).doc("Display help message."),
        option("--release").set(buildDebug, false).doc("Build a release version."),
        option("-o") & value("output", output),
        value("file", file) 
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
      case mode::HELP:
      {
        std::cout << "help\n";
        break; 
      };
      case mode::REPL:
      {
        Nexis::Repl repl { };
        result = repl.run();    
        break;
      };
    };
  };
  if (std::filesystem::exists(file))
  {
    Nexis::Lexer lexer {};
    lexer.read(file);
  }
  else
  {
    std::cout << "not input file found\n";
  };
  return result;
}
