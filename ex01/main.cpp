#include "PhoneBook.h"

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