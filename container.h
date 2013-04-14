//C++ Assignment 3
//Daniel Burnham-King
//2013/04/14
//container.h
//This class handles the container (extends widget)


#ifndef CONTAINER_H
#define	CONTAINER_H
#include "widget.h"
#include <stack>
#include "counter.h"

namespace brndan022
{       
    //abstract class
    class container :public widget
    {   
    protected:
        //store a list of pointers to be killed later
         std::stack<widget*> children;
         
         void renderContained(std::ostream & os, int depth){
             using namespace std;
            //create a temporary stack of pointers for printing
            stack<widget*> tempstack = children;            
            //render children
            while(!tempstack.empty()) {
                //container::indent(os,depth);
                tempstack.top()->render(os, depth + 1);
                tempstack.pop();
            }
         }
   
    public:
        
        virtual void add_child(widget * newChild)= 0;
        virtual ~container(){ 
            
        };
        
    };
}

#endif	/* CONTAINER_H */

