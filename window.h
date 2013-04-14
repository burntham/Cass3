//C++ Assignment 3
//Daniel Burnham-King
//2013/04/14
//window.h
//This class handles window (extends container)

#ifndef WINDOW_H
#define	WINDOW_H

#include "container.h"
#include <stack>
#include "counter.h"
#include "widget.h"

namespace brndan022 {

    class window :public container,public widget,public sjp::counter<window> {
    
    private:
        std::string title;
        
    public:    
        //constructor
        window(std::string title_):container(),widget(), title(title_){            
        }
        
        //render all the children
        virtual void render(std::ostream & os, int depth){
            using namespace std;
            container::indent(os,depth);
            cout<<"Window \""<<title<<"\""<<endl;
            renderContained(os, depth);
        }
        
        //adopt a child -_- >> going holywood style!
        virtual void add_child(widget * newChild){
            children.push(newChild);
        }
        
        //destructor
        ~window(){
            while (!children.empty()){
                
                delete children.top();
                children.pop();
            }
        };
        
    };
    
    
}
#endif	/* WINDOW_H */

