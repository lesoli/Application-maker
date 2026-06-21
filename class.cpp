#include "Headers/class.h"

Registration::Registration(std::string Newname, std::string Newemail, std::string Newpassword) {
    std::cout<<"Enter name:\n";
    std::cin>>Newname;
    name = Newname;

    std::cout<<"Enter email:\n";
    std::cin>>Newemail;
    email = Newemail;

    std::cout<<"Enter password:\n";
    std::cin>>Newpassword;
    password = Newpassword;
}

void Registration::displayInfo() {
    std::cout<<"Name: "<<name<<'\n'
    <<"email: "<<email<<'\n'
    <<"password: "<<password<<'\n';
}