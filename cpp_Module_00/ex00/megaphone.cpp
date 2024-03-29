/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obenjair <obenjair@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/07 17:11:02 by obenjair          #+#    #+#             */
/*   Updated: 2022/12/12 14:26:36 by obenjair         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

char ft_toupper(char c)
{
    if (c >= 'a' && c <= 'z')
        return (c - 32);
    return (c);
}

int main(int argc, char **argv)
{
    int i = 1;
    int j = 0;
    if (argc == 1)
        std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *";
    while (i < argc)
    {
        j = 0;
        while (argv[i][j])
        {
            std::cout << ft_toupper(argv[i][j]);
            j++;
        }
        i++;
        std::cout << " ";
    }
    std::cout << std::endl;
    return (0);
}