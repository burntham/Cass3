//C++ Assignment 3
//Daniel Burnham-King
//2013/04/14
//menu_item.h
//This class handles menu items (extends widget)

#ifndef MENU_ITEM_H
#define	MENU_ITEM_H
#include "widget.h"
#include "counter.h"
#include <iostream>

namespace brndan022
{
    class menu_item :public widget,public sjp::counter<menu_item> {
    private:
        std::string item;
        std::string shortC;
        
    public:
        //constructs
        menu_item(std::string item_, std::string shortC_):widget(),item(item_),shortC(shortC_){
            
        }
        //renders
       virtual void render(std::ostream & os, int depth){
           indent(os,depth);
           std::cout<<"Menu item \""<<item<<"\" \""<<shortC<<"\""<<std::endl;
       }
        
        
        virtual ~menu_item(){}
    };
        
}

#endif	/* MENU_ITEM_H */

