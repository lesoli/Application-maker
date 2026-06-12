#include <iostream>
#include "class.h"

int main() {
    std::cout<<"Hello!\n Do you want to Log in?\n [y/n]";

    char answer;
    std::cin>>answer
    if(answer == y || Y) {
        Registration first;
        Registration::Registation();
    } if else (answer == n || N) {
        return 0;
    } else {
        std::cout<<"Unknown answer\n";
    }
}