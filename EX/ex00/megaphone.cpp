/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbakrim <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/23 11:28:32 by hbakrim           #+#    #+#             */
/*   Updated: 2024/11/23 11:28:34 by hbakrim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int main(int ac, char **av)
{
    int i;
    std::string::size_type j;

    if (ac == 1)
        std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
    else
    {
        i = 1;
        while (i < ac)
        {
            std::string arg = av[i];
            j = 0;
            while (j < arg.size())
            {
                arg[j] = std::toupper(static_cast<unsigned char>(arg[j]));
                j++;
            }
            std::cout << arg;
            if (i < ac - 1)
                std::cout << " ";
            i++;
        }
        std::cout << std::endl;
    }
}
