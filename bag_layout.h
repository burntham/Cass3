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

namespace brndan022
{
    class bag_layout :public container, sjp::counter<bag_layout>
    {
    private:
        int width;
        int height;
    public:
        bag_layout(int width_,int height_):container(),widget(), width(width_), height(height_){}
        
        virtual void add_child(widget * newChild)
        {
            children.push(newChild);
        }
        virtual void render(std::ostream & os, int depth)
        {
            container::indent(os, depth);
        }  
        virtual ~bag_layout(){ 
            
        };
        
    };
}

#endif	/* BAG_LAYOUT_H */

