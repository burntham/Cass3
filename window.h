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

namespace brndan022 {

    class window :public container,public widget,public sjp::counter<window> {
    public:        
        window(void):container(){            
        };
        
        virtual void render(std::ostream & os, int depth){
            
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

