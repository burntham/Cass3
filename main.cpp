//C++ Assignment 3
//Daniel Burnham-King
//13.04.2013
//Driver

#include <cstdlib>
#include <iostream>
#include "widget.h"
#include "button.h"
#include "window.h"
#include "gui.h"

using namespace std;
using namespace brndan022;

void f1(void){
    gui g1;
    g1.render();
}
void f2(void){
   gui2 g2; 
   g2.render();
}

int main(int argc, char** argv) {
    f1(); 
    
    cout<<endl;
    
    f2();
    
    button::print_counts(cout,"button");
    menu_item::print_counts(cout,"menu Item");
    label::print_counts(cout,"Label");
    menu::print_counts(cout,"Menu");
    bag_layout::print_counts(cout,"Bag Layout");
    window::print_counts(cout,"window");
    
            
    return 0;
}




