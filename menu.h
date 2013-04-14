#ifndef MENU_H
#define	MENU_H

#include "container.h"
#include "counter.h"
#include <iostream>

namespace brndan022 {

    class menu :public container, public sjp::counter<menu>
    {
    private:
        std::string text,shortC;
        
    public:
        virtual void add_child(widget * newChild){
            children.push(newChild);
        }
        
        menu(std::string text_, std::string shortC_):container(),text(text_),shortC(shortC_)
        {};
        
        virtual void render(std::ostream & os, int depth){
            using namespace std;
            container::indent(os,depth);
            cout<<"Menu \""<<text<<" "<<shortC<<endl;
            renderContained(os,depth+1);
        }    
        
        
        
        virtual ~menu()
        {
            while (!children.empty()){
                
                delete children.top();
                children.pop();
            }
        }
        
        
        
    };
}
#endif	/* MENU_H */

