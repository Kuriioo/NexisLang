/**
 * @file Lexer.cpp 
 * @author Kurio
*/

#include <Kafe/Compiler/Lexer.hpp>
#include <Kafe/Compiler/Token.hpp>


#include <vector>
#include <fstream>
#include <iostream>


namespace Kafe
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

  void Lexer::next_line()
  {
    while (Lexer::peek() != '\n')
      next_char();
  };

  void Lexer::tokenize()
  {
    while (m_current != '\0')
    {
      switch (m_current)
      {
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
      next_char();
      std::cout << m_current;
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


  bool Lexer::is_kafe(const std::string &file)
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
