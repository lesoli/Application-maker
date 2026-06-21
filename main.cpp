#include <iostream>
#include "Headers/class.h"

int main() {
    bool exit = false;
    while (exit == false) {
        //Menu
        std::cout<<"Hello!\n What do you want ot do?\n";
        std::cout<<"1.Create new application\n";
        std::cout<<"2.Change application\n";
        std::cout<<"3.Delete application\n";
        std::cout<<"4.Exit\n";
        std::cout<<"What you pick:\n";
        //Picking an action
        int Pick;
        std::cin>>Pick;
        
        switch(Pick) {
            case 1: Registration first();
        }

        /*
        char answer;
        std::cin>>answer;
        if(answer == 'y' || answer == 'Y') {
            Registration first("inteligence", "meintel@proton.me", "***********...");
            first.displayInfo();
        } 
        else if (answer == 'n' || 'N') {
            return 0;
        } 
        else {
            std::cout<<"Unknown answer\n";
        }
        */
    }
}