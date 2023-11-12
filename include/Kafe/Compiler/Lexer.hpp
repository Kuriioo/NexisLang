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
  enum class Keyword
  {
    FN,
    IMPORT,
    RETURN
  };

  class Lexer
  {
  public:
    Lexer();

    void next_char();
    char peek();
    void next_line();

    void read(const std::string &file);

    bool is_kafe(const std::string &file); 
    bool is_kasm(const std::string &file);

    void tokenize();

    std::vector<Token> &tokens();
  private:
    int m_index;
    int m_line;
    std::string m_content;
    char m_current;
    std::vector<Token> m_tokens;
  };
};


#endif
