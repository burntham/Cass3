//C++ Assignment 3
//Daniel Burnham-King
//2013/04/14
//menu.h
//This class handles menu (extends container)

#ifndef MENU_H
#define	MENU_H

#include "container.h"
#include "counter.h"
#include <iostream>

namespace brndan022 {

    class menu :public container, public sjp::counter<menu>
    {
    private:
        std::string text,shortC;
        
    public:
        //constructor
        menu(std::string text_, std::string shortC_):container(),text(text_),shortC(shortC_){};

        virtual void add_child(widget * newChild) {
            children.push(newChild);
        }
        
        //render itself than it's children
        virtual void render(std::ostream & os, int depth){
            using namespace std;
            container::indent(os,depth);
            cout<<"Menu \""<<text<<" "<<shortC<<endl;
            renderContained(os,depth+1);
        }  
        //kills all its children 0.0
        virtual ~menu()
        {
            while (!children.empty()){
                
                delete children.top();
                children.pop();
            }
        }
        
        
        
    };
}
#endif	/* MENU_H */

