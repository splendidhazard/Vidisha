#include "contact.h"
#include <string>

contact::contact(std::string first, std::string second, std::string ph1,
                    std::string ph2, std::string email) {

    firstname = first;
    lastname = second;
    phone1 = ph1;
    phone2 = ph2;
    email = email;
}