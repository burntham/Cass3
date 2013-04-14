/* 
 * File:   label.h
 * Author: BRuNT
 *
 * Created on 14 April 2013, 1:18 AM
 */

#ifndef LABEL_H
#define	LABEL_H

#include "widget.h"
#include "counter.h"

namespace brndan022 {

    class label : public widget, sjp::counter<label>
    {
    private:
        std::string text;
        
    public:
        label(std::string text_):widget(),text(text_) {            
        }
        
        virtual void render(std::ostream & os, int depth){
            for (int i=0; i <depth; ++i){
                os<<" ";
            }
            os<<"Label \""<<text<<"\""<<std::endl;
        }
        
        virtual ~label(){
            
        }
    };
}
#endif	/* LABEL_H */

