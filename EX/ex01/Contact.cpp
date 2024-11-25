/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbakrim <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/24 14:57:21 by hbakrim           #+#    #+#             */
/*   Updated: 2024/11/24 14:57:23 by hbakrim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"

Contact::Contact() : first_name(""),last_name(""),nick_name(""),number_phone(""),darkestSecret(""){}

Contact::Contact(std::string first_name, std::string last_name, std::string nick_name, std::string number_phone, std::string darkestSecret)
{
    this->first_name = first_name;
    this->last_name = last_name;
    this->nick_name = nick_name;
    this->number_phone = number_phone;
    this->darkestSecret = darkestSecret;
}

std::string Contact::getFirstNmae()
{
    return first_name;
}

std::string Contact::getLastNmae()
{
    return last_name;
}

std::string Contact::getNickNmae()
{
    return nick_name;
}

std::string Contact::getNumberPhone()
{
    return number_phone;
}

std::string Contact::getDarkestSecret()
{
    return darkestSecret;
}
