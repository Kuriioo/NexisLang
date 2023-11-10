/**
 * @file Lexer.hpp 
 * @author Kurio
*/

#ifndef _KAFE_LEXER_HPP_
#define _KAFE_LEXER_HPP_


#include <vector>


#include <Kafe/Compiler/Token.hpp>


namespace Kafe
{
  class Lexer
  {
  public:
    Lexer();
    std::vector<Token>& tokens();
  private:
    std::vector<Token> m_tokens;
  };
};


#endif
