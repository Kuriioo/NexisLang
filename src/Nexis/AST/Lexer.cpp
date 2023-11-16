/**
 * @file Lexer.cpp 
 * @author Kuriioo
*/

#include <Nexis/AST/Lexer.hpp>


#include <string.h>


namespace Nexis {

  
  bool Lexer::is_operator(std::string str) {
    if (str.empty()) return false;
    return true;
  };


  bool Lexer::is_identifier(std::string str) {
    if (str.empty()) return false;
    return false;
  };


  void Lexer::lex(Token& token) {

  };


  void Lexer::skip_comment() {
    if (current_pointer[-1] == '/' && current_pointer[0] == '/') {
      std::cout << "Eezjgezrh\n";
    };
  };


  void Lexer::lex_number() {

  };


  void Lexer::lex_identifier() {
    
  };


};
