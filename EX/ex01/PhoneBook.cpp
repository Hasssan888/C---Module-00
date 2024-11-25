/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbakrim <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/23 11:29:07 by hbakrim           #+#    #+#             */
/*   Updated: 2024/11/23 11:29:09 by hbakrim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

phone_book::phone_book() : contactCount(0), oldestIndex(0){}

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
        return str.substr(0, 7) + ".";
    return str;
}

void   phone_book::displayContacts()
{
    int i;
    std::cout << std::setw(10) << "Index" << "|" << std::setw(10)<< std::setw(10) << "Frist Name" << "|"
    << std::setw(10) << "Last Name" << "|" << std::setw(10) << "Nickname" << "|" << std::endl;
    i = 0;
    while (i < contactCount)
    {
        std::cout << std::setw(10) << i + 1 << "|" << std::setw(10) << truncateString(contacts[i].getFirstNmae()) << "|"
        << std::setw(10) << truncateString(contacts[i].getLastNmae()) << "|" << std::setw(10) << truncateString(contacts[i].getNickNmae()) << "|" << std::endl;
        i++;
    }
}

void phone_book::displayContactDetails(int index)
{
    index--;
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
