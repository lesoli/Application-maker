#pragma once
#include <iostream>

class App {
    private:
        std::string name;
        std::string email;
        std::string password;
    public:
        maker(std::string Nn, std::string Ne, std::string Np);
        void displayInfo();
        void ChangeRegistration(); //need to add in near future
        void DeleteRegistration(); //NTAINF
        
};