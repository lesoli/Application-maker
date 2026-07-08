#include <iostream>
#include <map>
#include <vector>
#include "LMWV.h"

int main() {
    std::vector <maker*> VectorForMap;
    std::map <std::string, maker> users;    
    
    std::string User;
    std::string name;
    std::string email;
    std::string password;
    
    std::cout<<"Enter User: ";
    std::cin>>User;
    std::cout<<"Now enter Name for user\n";
    std::cin>>name; //add cin.getline()
    std::cout<<"Enter email\n";
    std::cin>>email;
    std::cout<<"Enter password\n";
    std::cin>>password;

    users.insert({User, maker(name, email, password)});
    VectorForMap.push_back(&users.at(User));
}