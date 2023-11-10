/**
 * @file Lexer.hpp 
 * @author Kurio
*/

#ifndef _KAFE_LEXER_HPP_
#define _KAFE_LEXER_HPP_


#include <vector>


#include <Kafe/Compiler/Token.hpp>
#include <string>


namespace Kafe
{
  class Lexer
  {
  public:
    Lexer();

    void add(const std::string& s);
    
    std::vector<Token>& tokens();
  private:
    std::vector<Token> m_tokens;
  };
};


#endif
