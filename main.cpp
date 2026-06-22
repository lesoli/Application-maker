#include <iostream>
#include <vector>
#include "Headers/class.h"

int main() {
    bool exit = false;
    std::vector<std::string> NamesOfRegistaration;

    std::cout<<"Hello!\nWhat do you want ot do?\n";
    
    while (exit == false) {
        //Menu
        
        std::cout<<"1.Create new application\n";
        std::cout<<"2.Change application\n";
        std::cout<<"3.Delete application\n";
        std::cout<<"4.Display information about application";
        std::cout<<"5.Exit\n\n";
        std::cout<<"What you pick:\n";
        //Picking an action
        int Pick;
        std::cin>>Pick;
        
        switch(Pick) {
            case 1: 
                Registration first();
                break;
            case 2:
                break; 
            case 3: 
                break;
            case 4:
                break;
            case 5:
                exit = false;
                break;
            default:
                std::cout<<"Enter valid number\n";
                break;
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