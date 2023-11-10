/**
 * @file Lexer.cpp 
 * @author Kurio
*/

#include <Kafe/Compiler/Lexer.hpp>
#include <Kafe/Compiler/Token.hpp>


#include <vector>


namespace Kafe
{
  Lexer::Lexer() {};
  
  void Lexer::add(const std::string& s)
  {
    
  };

  std::vector<Token>& Lexer::tokens()
  {
    return m_tokens;
  };
};
