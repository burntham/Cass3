//C++ Assignment 3
//Daniel Burnham-King
//2013/04/14
//bag_layout.h
//This class handles bag layout (extends container)

#ifndef BAG_LAYOUT_H
#define	BAG_LAYOUT_H

#include "container.h"
#include "counter.h"
#include <iostream>
//#include <stack>

namespace brndan022 {

    class bag_layout : public container,public sjp::counter<bag_layout> {
    private:
        int width;
        int height;
    public:
        //constructor
        bag_layout(int width_, int height_) : container(), width(width_), height(height_) {
        }
        
        //add child to thing
        virtual void add_child(widget * newChild) {
            children.push(newChild);
        }
        
        //render
        virtual void render(std::ostream & os, int depth) {
            //indent it
            container::indent(os, depth);
            std::cout << "BagLayout " << width << "x" << height << std::endl;
            //render children
            renderContained(os, depth);
        }
        
        //destructor
        virtual ~bag_layout() {
            while (!children.empty()) {
                //kill all the things in the stack
                delete children.top();
                children.pop();
            }

        };

    };
}

#endif	/* BAG_LAYOUT_H */

