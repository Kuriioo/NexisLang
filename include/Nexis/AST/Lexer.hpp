/**
 * @file Lexer.hpp 
 * @author Kuriioo
*/

#ifndef NEXIS_LEXER_HPP
#define NEXIS_LEXER_HPP


#include <string>


#include <Nexis/AST/Token.hpp>


namespace Nexis {

  
  class Lexer {


    // First character of the buffer
    const char* buffer_start;


    // Last character of the buffer
    const char* buffer_end;


    // Current not consumed character
    const char* current_pointer;


    //Token next_token;


  public:
    
    Lexer() { }; 
    ~Lexer() { };


    void lex(Token& token);


    static bool is_operator(std::string str);


    static bool is_identifier(std::string str);

  private:
  
    void skip_comment();
  
    void lex_number();
    void lex_identifier();
  
  };


};


#endif
