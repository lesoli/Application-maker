#pragma once
#include <iostream>

class Registration {
    private:
        std::string name;
        std::string email;
        std::string password;
    public:
        Registration(std::string name, std::string email, std::string password);
        void displayInfo();
};