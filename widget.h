//C++ Assignment 3
//Daniel Burnham-King
//13.04.2013
//Widget class

#ifndef WIDGET_H
#define	WIDGET_H

#include <iostream>
namespace brndan022
{
    class widget
    {  
    protected:
            void indent(std::ostream & os, int depth) {
            for (int i = 0; i < depth; ++i) {
                os << "  ";
            }
        }       
        
    public:
        virtual void render(std::ostream & os, int depth) =0;    
        virtual ~widget(){}
    };
}

#endif	/* WIDGET_H */

