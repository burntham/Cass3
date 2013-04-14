/* 
 * File:   menu_item.h
 * Author: BRuNT
 *
 * Created on 14 April 2013, 1:17 AM
 */

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
        menu_item(std::string item_, std::string shortC_):widget(),item(item_),shortC(shortC_){
            
        }
        
       virtual void render(std::ostream & os, int depth){
           indent(os,depth);
           std::cout<<"Menu item \""<<item<<"\" \""<<shortC<<"\""<<std::endl;
       }
        
        
        virtual ~menu_item(){}
    };
        
}

#endif	/* MENU_ITEM_H */

