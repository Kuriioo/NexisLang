/**
 * @file Lexer.cpp 
 * @author Kurio
*/

#include <Nexis/AST/Lexer.hpp>


#include <string.h>


namespace Nexis {

  
  bool Lexer::is_operator(std::string str) {
    return true;
  };


  bool Lexer::is_identifier(std::string str) {
    return false;
  };


  void Lexer::lex(Token& token) {

  };


  void Lexer::skip_comment() {

  };


  void Lexer::lex_number() {

  };


  void Lexer::lex_identifier() {

  };


};
