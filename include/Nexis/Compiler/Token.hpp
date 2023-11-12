/**
 * @file Token.hpp 
 * @author Kurio
*/

#ifndef _NEXIS_TOKEN_HPP_
#define _NEXIS_TOKEN_HPP_


#include <string>


namespace Nexis
{
  enum class TokenType
  {
    NUMBER,
    STRING
  };
  
  struct Token
  {
    TokenType type;
    
    Token(TokenType type) : type(type) {};
  };
};


#endif
