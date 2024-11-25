/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbakrim <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/23 11:27:20 by hbakrim           #+#    #+#             */
/*   Updated: 2024/11/23 11:27:34 by hbakrim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"



int main()
{
    phone_book Pbook;
    std::string command, firstName, lastName, nicktName, nuberPhone, darkestSecret, index_str;
    int index_int;

    while (1)
    {
        std::cout << "Entre commnd (ADD, SEARCH, EXIT): ";
        std::getline(std::cin, command);
        if (std::cin.eof())
            return(0);
        if (command == "ADD")
        {
            do {

                std::cout << "Enter first name: ";
                std::getline(std::cin, firstName);
                if (std::cin.eof())
                    return(0);
                if (!is_print(firstName)|| firstName.empty())
                    std::cout << "It is not valid try again to ";
            }while (!is_print(firstName)|| firstName.empty());

            do {
                std::cout << "Enter last name: ";
                std::getline(std::cin, lastName);
                if (std::cin.eof())
                    return(0);
                if (!is_print(lastName)|| lastName.empty())
                    std::cout << "It is not valid try again to ";
            }while (lastName.empty() || !is_print(lastName));

            do {
                std::cout << "Enter nickname: ";
                std::getline(std::cin, nicktName);
                if (std::cin.eof())
                    return(0);
                if (!is_print(nicktName)|| nicktName.empty())
                    std::cout << "It is not valid try again to ";
            }while (nicktName.empty() || !is_print(nicktName));

            do {
                std::cout << "Enter number phone: ";
                std::getline(std::cin, nuberPhone);
                if (std::cin.eof())
                    return(0);
                if (!isValidPhoneNumber(nuberPhone) || nuberPhone.empty())
                    std::cout << "It is not valid try again to ";
            }while (nuberPhone.empty() || !isValidPhoneNumber(nuberPhone));

            do {
                std::cout << "Enter darkestSecret: ";
                std::getline(std::cin, darkestSecret);
                if (std::cin.eof())
                    return(0);
                if (!is_print(darkestSecret)|| darkestSecret.empty())
                    std::cout << "It is not valid try again to ";
            } while (darkestSecret.empty() || !is_print(darkestSecret));
            Contact newContact(firstName, lastName, nicktName, nuberPhone, darkestSecret);
            Pbook.addContact(newContact);
        }
        else if (command == "SEARCH")
        {
            Pbook.displayContacts();
            do {
                std::cout << "Enter index to view details: ";
                std::getline(std::cin, index_str);
                if (std::cin.eof())
                    return(0);
                if (!str_isnum(index_str))
                    std::cout << "Index Invalid Input" << std::endl;
            }while (!str_isnum(index_str) || index_str.empty());
            std::stringstream ss(index_str);
            ss >> index_int;
            Pbook.displayContactDetails(index_int);    
        }
        else if (command == "EXIT")
            break;
        else
            std::cout << "Invalid command!" << std::endl;
    }
    return 0;
}
