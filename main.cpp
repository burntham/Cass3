//C++ Assignment 3
//Daniel Burnham-King
//13.04.2013
//Driver

#include <cstdlib>
#include <iostream>
#include "widget.h"
#include "button.h"
#include "window.h"

using namespace std;
using namespace brndan022;
/*
 * 
 */


int main(int argc, char** argv) {
    window * win = new window;
    win->add_child(dynamic_cast<widget*>(new button("OK","pressed")));
    win->add_child(dynamic_cast<widget*>(new button("OK","pressed")));
    
    
    delete win;
    button::print_counts(cout,"button");
    window::print_counts(std::cout,"window");
            
    return 0;
}

