/**
 * @file Repl.hpp
 * @author Kurio
*/

#ifndef _NEXIS_CLI_REPL_HPP_
#define _NEXIS_CLI_REPL_HPP_


namespace Nexis
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