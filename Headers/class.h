#pragma once
#include <iostream>

class Registration {
    private:
        std::string name;
        std::string email;
        std::string password;
    public:
        Registration(std::string Newname, std::string Newemail, std::string Newpassword);
        void displayInfo();
};