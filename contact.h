#if !defined(CONTACT_H)
#define CONTACT_H

#include <string>

class contact
{
private:
    std::string firstname;
    std::string lastname;
    std::string phone1;
    std::string phone2;
    std::string email;
public:
    contact(std::string first, std::string last, 
            std::string phone1, std::string phone2, 
            std::string email);
};


#endif // CONTACT_H
