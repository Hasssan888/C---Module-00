/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbakrim <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/24 14:57:34 by hbakrim           #+#    #+#             */
/*   Updated: 2024/11/24 14:57:38 by hbakrim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
#define CONTACT_HPP

#include <iostream>

class Contact
{
    private:
        std::string first_name;
        std::string last_name;
        std::string nick_name;
        std::string number_phone;
        std::string darkestSecret;
    public:
        Contact();
        Contact(std::string first_name, std::string last_name, std::string nick_name, 
            std::string number_phone, std::string darkestSecret);
        std::string getFirstNmae();
        std::string getLastNmae();
        std::string getNickNmae();
        std::string getNumberPhone();
        std::string getDarkestSecret();
};

#endif
