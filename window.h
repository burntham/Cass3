/* 
 * File:   window.h
 * Author: BRuNT
 *
 * Created on 14 April 2013, 1:21 AM
 */

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
        
        virtual void render(std::ostream & os, int depth){
            using namespace std;
            container::indent(os,depth);
            cout<<"Window \""<<title<<"\""<<endl;
            //create a temporary stack of pointers for printing
            stack<widget*> tempstack = children;
            container::indent(os,depth);
            //render children
            while(!tempstack.empty()) {
                tempstack.top()->render(os, depth + 1);
                tempstack.pop();
            }
        }
        
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

