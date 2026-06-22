#include <iostream>
#include <vector>
#include <map>
#include "Headers/class.h"

int main() {
    //bool exit = false;
    std::vector<std::string> NamesOfRegistaration;
    std::map <std::string, Registration> users;
    std::cout<<"Hello!\nWhat do you want ot do?\n";
    
    //Menu
    std::cout<<"1.Create new application\n"; //use map <std::string, Registartion> users;
    std::cout<<"2.Change application\n";    //something with map like users[usernameThatYouWantToChange] = Registration() or using users.insert({})
    std::cout<<"3.Delete application\n"; //use mapname.erase(name of what i need to delete)
    std::cout<<"4.Display information about application\n"; //users["ivan"].displayInfo();
    std::cout<<"5.Exit\n\n";
    std::cout<<"What you pick:\n";
    
    //Picking an action
    int Pick;
    std::cin>>Pick;
    int answer = Pick;
    switch(answer) {
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
            //exit = false;
            break;
        default:
            std::cout<<"Enter valid number\n";
    }
}