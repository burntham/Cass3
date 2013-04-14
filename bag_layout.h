/* 
 * File:   bag_layout.h
 * Author: BRuNT
 *
 * Created on 14 April 2013, 1:22 AM
 */

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

        bag_layout(int width_, int height_) : container(), width(width_), height(height_) {
        }

        virtual void add_child(widget * newChild) {
            children.push(newChild);
        }

        virtual void render(std::ostream & os, int depth) {
            container::indent(os, depth);
            std::cout << "BagLayout " << width << "x" << height << std::endl;
            renderContained(os, depth);
        }

        virtual ~bag_layout() {
            while (!children.empty()) {

                delete children.top();
                children.pop();
            }

        };

    };
}

#endif	/* BAG_LAYOUT_H */

