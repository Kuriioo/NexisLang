/**
 * @file LexerState.hpp
 * @author Kuriioo
 */

#ifndef NEXIS_LEXERSTATE_HPP
#define NEXIS_LEXERSTATE_HPP


#include <Nexis/AST/Lexer.hpp>


namespace Nexis {

  class LexerState {
    
    public:

      LexerState() {};

    private:

      friend class Lexer;
  };

};


#endif
