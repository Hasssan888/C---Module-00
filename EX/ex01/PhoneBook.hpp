/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbakrim <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/23 11:29:20 by hbakrim           #+#    #+#             */
/*   Updated: 2024/11/23 11:29:24 by hbakrim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef  PHONEBOOK_HPP
#define  PHONEBOOK_HPP

#include <iostream>
#include <string>
#include <iomanip>
#include <limits>
#include <sstream>
#include "Contact.hpp"

class phone_book
{
    private:
        Contact contacts[8];
        int contactCount;
        int oldestIndex;
        std::string truncateString(const std::string str);
    public:
        phone_book();
        void addContact(Contact new_contact);
        void    displayContacts();
        void    displayContactDetails(int index);
};

bool	str_isnum(std::string str);
bool isValidPhoneNumber(const std::string str);
int is_print(std::string str);

#endif
