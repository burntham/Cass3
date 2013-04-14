/* 
 * File:   container.h
 * Author: BRuNT
 *
 * Created on 14 April 2013, 1:20 AM
 */

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
   
    public:
        
        virtual void add_child(widget * newChild)= 0;
        virtual ~container(){ 
            
        };
        
    };
}

#endif	/* CONTAINER_H */

