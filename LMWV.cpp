#include "LMWV.h"

App::maker(std::string Nn, std::string Ne, std::string Np) : name(Nn), email(Ne), password(Np) {}

void App::displayInfo() {
    std::cout<<"Name: "<<name<<'\n'
    <<"email: "<<email<<'\n'
    <<"password: "<<password<<'\n';
}

void ChangeRegistration() {
    /*
    std::cout<<"1.Name\n";
    std::cout<<"2.Email\n";
    std::cout<<"1.Password\n\n";
    std::cout<<"Pick what you want to change: ";

    int answer;
    std::cin>>answer;

    switch(answer) {
        case 1:
        std::cout<<"Enter new name: ";
        std::cin>>name;
        this name -> name;
        break;
        case 2:
        std::cout<<"Enter new email: ";
        std::cin>>email;
        this email -> email;
        break;
        case 3:
        std::cout<<"Enter new password: ";
        std::cin>>password;
        this password -> password;
        break;
        default:
        std::cout<<"Incorrect number\n";
        break;
    }
    */
}
