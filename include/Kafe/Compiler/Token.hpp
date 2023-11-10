/**
 * @file Token.hpp 
 * @author Kurio
*/

#ifndef _KAFE_TOKEN_HPP_
#define _KAFE_TOKEN_HPP_


#include <string>


namespace Kafe
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
