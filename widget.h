//C++ Assignment 3
//Daniel Burnham-King
//13.04.2013
//Widget class

#ifndef WIDGET_H
#define	WIDGET_H

namespace brndan022
{
    class widget
    {  
    public:
        virtual void render(void) =0;
        
        virtual ~widget(){}
    };
}

#endif	/* WIDGET_H */

