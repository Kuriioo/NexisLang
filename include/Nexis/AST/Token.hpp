/**
 * @file Token.hpp 
 * @author Kuriioo
*/

#ifndef NEXIS_TOKEN_HPP
#define NEXIS_TOKEN_HPP


#include <string>


namespace Nexis {

  enum class TokenType {
    NUMBER,
    STRING
  };
  

  struct Token {
    TokenType type;
    
    Token(TokenType type) 
      : type(type) {};
  };
  
};


#endif
