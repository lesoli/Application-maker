#include "Headers/class.h"

Registration::Registration(std::string Newname, std::string Newemail, std::string Newpassword) {
    name = Newname;
    email = Newemail;
    password = Newpassword;
}

void Registration::displayInfo() {
    std::cout<<"Name: "<<name<<'\n'
    <<"email: "<<email<<'\n'
    <<"password: "<<password<<'\n';
}