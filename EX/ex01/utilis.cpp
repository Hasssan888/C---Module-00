/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utilis.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbakrim <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/23 11:29:37 by hbakrim           #+#    #+#             */
/*   Updated: 2024/11/23 11:29:39 by hbakrim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

bool	str_isnum(std::string str)
{
	for (size_t cur = 0; cur < str.length(); cur++)
		if ((str[cur] < '0' || str[cur] > '9') && str[cur] != '-')
			return false;
	return true;
}

bool isValidPhoneNumber(const std::string str) 
{
    int i = 0;

    if (str[0] == '+')
        i++;
    while (str[i])
    {
        if (str[i] < '0' || str[i] > '9')
            return false;
        i++;
    }  
    return true;
}

int is_print(std::string str)
{
    int i = 0;

    while (str[i])
    {
        if (!isprint(str[i]))
            return 0;
        i++;
    }
    return 1;
}