#include <iostream>
#include <string>
#include "contact.h"

int insertContact() {
    std::string f = "",l = "", p1 = "", p2 = "", email = "";
    int response = 0;

    std::string choice = "n";

    std::cout << "First Name: ";
    std::cin >> f;

    std::cout << "Last Name: ";
    std::cin >> l;

    std::cout << "Phone Number: ";
    std::cin >> p1;

    std::cout << "Do you want to entrer another phone numer? (yes/no): ";
    std::cin >> choice;

    if (choice[0] == 'y' || choice[0] == 'Y') {
        std::cout << "Phone Number: ";
        std::cin >> p2;
    } 

    std::cout << "Do you want to entrer email? (yes/no): ";
    std::cin >> choice;

    if (choice[0] == 'y' || choice[0] == 'Y') {
        std::cout << "Email Address: ";
        std::cin >> email;
    } 

    // TODO send data to insert controller
    return response;

}