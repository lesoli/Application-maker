#include <iostream>
#include "Headers/class.h"

int main() {
    std::cout<<"Hello!\n Do you want to Log in?\n [y/n]";

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
}