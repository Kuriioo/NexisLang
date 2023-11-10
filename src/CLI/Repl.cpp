/**
 * @file Repl.cpp
 * @author Kurio
*/

#include <iostream>

#include <CLI/Repl.hpp>
#include <Kafe/Kafe.hpp>


namespace Kafe 
{
    int Repl::run()
    {
        print_header();
        return 0;
    };
    void Repl::print_header()
    {
        std::printf(
            "Kafe Version: %i.%i\n"
            "Type \"Q\" to quit\n",
            KAFE_VERSION_MAJOR,
            KAFE_VERSION_MINOR
        ); 
    };
};