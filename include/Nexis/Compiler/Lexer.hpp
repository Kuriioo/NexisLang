/**
 * @file Lexer.hpp 
 * @author Kurio
*/

#ifndef _NEXIS_LEXER_HPP_
#define _NEXIS_LEXER_HPP_


#include <vector>


#include <Nexis/Compiler/Token.hpp>
#include <string>


namespace Nexis
{
  enum class Keyword
  {
    FN,
    IMPORT,
    RETURN,

    _NONE
  };

  
  class Lexer
  {
  public:
    Lexer();

    const std::vector<std::string> keywords = {
      "fn", "return", "import"
    };


    void next_char();
    char peek();
    void next_line();
    void skip_whitespaces();
    Keyword is_keyword(const std::string &s);

    void read(const std::string &file);

    bool is_Nexis(const std::string &file); 
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
