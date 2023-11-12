/**
 * @file Repl.cpp
 * @author Kurio
*/

#include <iostream>

#include <CLI/Repl.hpp>
#include <Nexis/Nexis.hpp>


namespace Nexis 
{
    int Repl::run()
    {
        print_header();
        return 0;
    };
    void Repl::print_header()
    {
        std::printf(
            "Nexis Version: %i.%i\n"
            "Type \"Q\" to quit\n",
            NEXIS_VERSION_MAJOR,
            NEXIS_VERSION_MINOR
        ); 
    };
};