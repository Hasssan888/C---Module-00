#include "phonebook.h"

void phone_book::addContact(Contact new_contact)
{
    if (contactCount < 8)
    {
        contacts[contactCount] = new_contact;
        contactCount++;
    }
    else
    {
        contacts[oldestIndex] = new_contact;
        oldestIndex = (oldestIndex + 1) % 8;
    }
}

std::string  phone_book::truncateString(const std::string str)
{
    if (str.length() > 10)
        return str.substr(0, 7) + "...";
    return str;
}

void   phone_book::displayContacts()
{
    int i;
    std::cout << std::setw(10) <<"Index" << "|" << std::setw(10)<< std::setw(10) <<"Frist Name" << "|"
    << std::setw(10) << "Last Name" << "|" << std::setw(10) << "Nickname" << "|" << std::endl;
    i = 0;
    while (i < contactCount)
    {
        std::cout << std::setw(10) << i << "|" << std::setw(10) << truncateString(contacts[i].getFirstNmae()) << "|"
        << std::setw(10) << truncateString(contacts[i].getLastNmae()) << "|" << std::setw(10) << truncateString(contacts[i].getNickNmae()) << "|" << std::endl;
        i++;
    }
}

void phone_book::displayContactDetails(int index)
{
    
    if (index < 0 || index >= contactCount)
    {
        std::cout << "Invalid index." << std::endl;
        return;
    }
    std::cout << "First Name : " << contacts[index].getFirstNmae() << std::endl;
    std::cout << "Last Name : " << contacts[index].getLastNmae() << std::endl;
    std::cout << "Nickname : " << contacts[index].getNickNmae() << std::endl;
    std::cout << "Number Phone : " << contacts[index].getNumberPhone() << std::endl;
    std::cout << "Darkest Secreat : " << contacts[index].getDarkestSecret() << std::endl;
}


int main()
{
    phone_book Pbook;
    std::string command;
    std::string firstName;
    std::string lastName;
    std::string nicktName;
    std::string nuberPhone;
    std::string darkestSecret;
    int index;

    while (1)
    {
        std::cout << "Entre commnd (ADD, SEARCH, EXIT): ";
        std::cin >> command;
        if (command == "ADD")
        {
            std::cout << "Enter first name: ";
            std::cin >> firstName;
            std::cout << "Enter last name: ";
            std::cin >> lastName;
            std::cout << "Enter nickname: ";
            std::cin >> nicktName;
            std::cout << "Enter number phone: ";
            std::cin >> nuberPhone;
            std::cout << "Enter darkestSecret: ";
            std::cin >> darkestSecret;
            Contact newContact(firstName, lastName, nicktName, nuberPhone, darkestSecret);
            Pbook.addContact(newContact);
        }
        else if (command == "SEARCH")
        {
            Pbook.displayContacts();
            std::cout << "Enter index to view details: ";
            std::cin >> index;
            Pbook.displayContactDetails(index);
        }
        else if (command == "EXIT")
            break;
        else
            std::cout << "Invalid command!" << std::endl;
    }
    return 0;
}