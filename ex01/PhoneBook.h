#ifndef  PHONEBOOK_H
#define  PHONEBOOK_H

#include <iostream>
#include <string>
#include <iomanip>

class Contact
{
    private:
        std::string first_name;
        std::string last_name;
        std::string nick_name;
        std::string number_phone;
        std::string darkestSecret;
    public:

        Contact()
        {
            first_name = "";
            last_name = "";
            nick_name = "";
            number_phone = "";
            darkestSecret = "";
        }
        Contact(std::string first_name, std::string last_name, std::string nick_name, 
            std::string number_phone, std::string darkestSecret)
            {
                this->first_name = first_name;
                this->last_name = last_name;
                this->nick_name = nick_name;
                this->number_phone = number_phone;
                this->darkestSecret = darkestSecret;
            }
        std::string getFirstNmae();
        std::string getLastNmae();
        std::string getNickNmae();
        std::string getNumberPhone();
        std::string getDarkestSecret();
};

class phone_book
{
    private:
        Contact contacts[8];
        int contactCount;
        int oldestIndex;
        std::string truncateString(const std::string str);
    public:
        phone_book()
        {
            contactCount = 0;
            oldestIndex = 0;
        }
        void addContact(Contact new_contact);
        void    displayContacts();
        void    displayContactDetails(int index);
};




#endif