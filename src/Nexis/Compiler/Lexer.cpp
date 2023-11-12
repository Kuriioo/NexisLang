/**
 * @file Lexer.cpp 
 * @author Kurio
*/

#include <Nexis/Compiler/Lexer.hpp>
#include <Nexis/Compiler/Token.hpp>


#include <vector>
#include <fstream>
#include <iostream>
#include <cstring>


namespace Nexis
{
  Lexer::Lexer() {};

  void Lexer::next_char()
  {
    m_current = m_content.at(m_index + 1);
    m_index++;
  };

  char Lexer::peek()
  {
    return m_content.at(m_index + 1);
  };

  void Lexer::skip_whitespaces()
  {
    while (m_current == 13 || m_current == 10 || m_current == ' ' || m_current == '\t')
      next_char();
  };

  Keyword Lexer::is_keyword(const std::string &s)
  {
    if (strcmp(s.c_str(), "fn") == 0) 
    {
      return Keyword::FN;
    }
    else if (strcmp(s.c_str(), "return") == 0)
    {
      return Keyword::RETURN;
    }
    else if (strcmp(s.c_str(), "import") == 0)
    {
      return Keyword::IMPORT;
    };
    return Keyword::_NONE;
  };

  void Lexer::next_line()
  {
    while (Lexer::peek() != '\n')
      next_char();
    m_line++;
  };

  void Lexer::tokenize()
  {
    while (m_current != '\0')
    {
      std::string buffer { "" };
      if (isalpha(m_current))
      {
        while (isalpha(m_current))
        {
          buffer.push_back(m_current);
          next_char();
        };
        Keyword keyword { is_keyword(buffer) };
        if (keyword != Keyword::_NONE)
        {
          std::cout << "keyword found\n";
        };
      };
      switch (m_current)
      {
        case '"':
        {
        };
        case '(':
        {
        };
        case ')':
        {
        };
        case '{':
        {
        };
        case '}':
        {
        };
        case '/': 
        {
          if (peek() == '/') 
          {
            next_line(); 
          }; 
          break;
        }
      };
      std::cout << m_current;
      next_char();
      skip_whitespaces();
    };
  };

  void Lexer::read(const std::string &file)
  {
    std::string content { "" };
    std::ifstream f { file }; 
    char c;
    while (f)
    {
      c = f.get();
      content.push_back(c);
    };
    m_content = content;
    m_index = 0;
    m_current = content.at(m_index);
    m_content.push_back('\0');
    tokenize();
  };


  bool Lexer::is_Nexis(const std::string &file)
  {
    return false;
  };

  bool Lexer::is_kasm(const std::string &file)
  {
    return false;
  };

  std::vector<Token> &Lexer::tokens()
  {
    return m_tokens;
  };
};
