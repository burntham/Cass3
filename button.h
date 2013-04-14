/* 
 * File:   button.h
 * Author: BRuNT
 *
 * Created on 13 April 2013, 9:07 PM
 */

#ifndef BUTTON_H

#define	BUTTON_H

#include "widget.h"
#include "container.h"
#include "counter.h"


namespace brndan022 {

    class button : public widget, public sjp::counter <button>
    {
    private:
        
        std::string type;
        std::string status;
    public:
        
        button (std::string text_,std::string status_):widget(),type(text_), status(status_){
        }
        
       //Implement render
       virtual void render(std::ostream & os, int depth){
            indent(os,depth);
            std::cout<<"Button "<<"\""<<type<<" "<<status<<"\""<<std::endl;
        };
       
       //destructor
       virtual ~button(){}
            
    };
}


#endif	/* BUTTON_H */

