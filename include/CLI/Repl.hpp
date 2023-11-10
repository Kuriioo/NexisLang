/**
 * @file Repl.hpp
 * @author Kurio
*/

#ifndef _KAFE_CLI_REPL_HPP_
#define _KAFE_CLI_REPL_HPP_


namespace Kafe
{
    class Repl
    {
    public:
        int run();
    private:
        void print_header();
    };
};

#endif