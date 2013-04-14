//C++ Assignment 3
//Daniel Burnham-King
//2013/04/14
//label.h
//This class handles bag label (extends widget)

#ifndef LABEL_H
#define	LABEL_H

#include "widget.h"
#include "counter.h"

namespace brndan022 {

    class label : public widget,public sjp::counter<label>
    {
    private:
        std::string text;
        
    public:
        //constructs -0.o
        label(std::string text_):widget(),text(text_) {            
        }
        
        //renders
        virtual void render(std::ostream & os, int depth){
            indent(os,depth);
            os<<"Label \""<<text<<"\""<<std::endl;
        }
        
        virtual ~label(){
            //nothing needed here
        }
    };
}
#endif	/* LABEL_H */

