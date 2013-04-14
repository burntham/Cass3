//C++ Assignment 3
//Daniel Burnham-King
//2013/04/14
//gui.h
//This file handles the gui and gui2 classes

#ifndef GUI_H
#define	GUI_H
#include "bag_layout.h"
#include "button.h"
#include "container.h"
#include "counter.h"
#include "label.h"
#include "menu.h"
#include "menu_item.h"
#include "widget.h"
#include "window.h"

namespace brndan022
{
    class gui
    {
        
    public:
        window * Window;
        
        gui(){
            
            //create a bunch of stuff ( to be added to to baglayout)
            //was testing the whole dynamic casting thing... - didn't seem to need it
            widget * Label = dynamic_cast<widget*>(new label("Press OK to Conitinue"));
            widget  * ok = dynamic_cast<widget*>(new button("OK","pressed"));
            widget * cancel=dynamic_cast<widget*>(new button("Cancel","not pressed"));
            
            //menu items
            menu_item * file = new menu_item("Exit","Alt F4");
            menu_item * save = new menu_item("save","Ctrl S");
            
            menu * Menu = new menu("File","Alt F");
            Menu->add_child(file);
            Menu->add_child(save);
            
            //create new bag layout1
            bag_layout * bagLayout = new bag_layout(400,300);
            bag_layout * bagLayout2 = new bag_layout(400,20);
            
            //add to baglayout
            bagLayout->add_child(Label);
            bagLayout->add_child(ok);
            bagLayout->add_child(cancel);       
            
            //add to baglayout2
            bagLayout2->add_child(Menu);
                      
            //create a window
            Window = new window("Main");
            
            //add to window
            Window->add_child(bagLayout);
            Window->add_child(bagLayout2);
        };   
        
        void render(){
            using namespace std;    
            cout<<"--Gui Open--"<<endl;
            Window->render(cout,0);
        }
        
        ~gui(){
            delete Window;
            std::cout<<"--Gui Closed--"<<std::endl;
        };
    };
    class gui2
    {
        
    public:
        window * Window;
        
        //Gui with nester Everything - no dynamic casting
        gui2(){
            //create a bunch of stuff ( to be added to to baglayout)
            label * Lab = new label("Choose your weapon wisely:");
            button * op1 = new button("Doominator","not pressed");
            button * op2 = new button("Star destroyer","not pressed");
            button * op3 = new button ("shrink ray", "not pressed");
            button * op4 = new button ("duck","pressed");
    ///        //make a baglayout to hold em
            bag_layout * bag1 = new bag_layout(300,300);
            //pop em in the bag layout
            bag1->add_child(Lab);bag1->add_child(op1);bag1->add_child(op2);
            bag1->add_child(op3);bag1->add_child(op4);
            
            //Make some menu items
            menu_item * i1 = new menu_item("attack", "Punch any random group");
            menu_item * i2 = new menu_item("Quack","spacebar x 10000");
            menu_item * i3 = new menu_item ("bark","-you silly goose, ducks don't bark");
            menu_item * i4 = new menu_item("force bark", "lettCtrl + rightCtrl + F6 + the big red button");
    ///        make a menu        
            menu  * Men= new menu("Party Favours","Ctrl + Alt + Delete");
            Men->add_child(i1);Men->add_child(i2);Men->add_child(i3);Men->add_child(i4);
            
            bag_layout *  bag2 = new bag_layout(10,100);
            bag2->add_child(Men);
            
            Window = new window("The Unknown");
            Window->add_child(bag1);
            Window->add_child(bag2);
        };   
        
        void render(){
            using namespace std;  
            cout<<"--Gui Open--"<<endl;
            Window->render(cout,0);
        }
        
        ~gui2(){
            delete Window;
            std::cout<<"--Gui Closed--"<<std::endl;
        };
    };
}
#endif	/* GUI1_H */

