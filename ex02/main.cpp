/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdouzi < mdouzi@student.1337.ma>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/16 19:57:07 by mdouzi            #+#    #+#             */
/*   Updated: 2023/10/16 20:08:04 by mdouzi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int main()
{
    std::string mystr=  "HI THIS IS BRAIN";
    std::string *stringPTR = &mystr;
    std::string &stringREF = mystr;

    std::cout << "The memory address of the string variable " << &mystr << std::endl;
    std::cout << "The memory address held by stringPTR " << stringPTR << std::endl;
    std::cout << "The memory address held by stringREF " << &stringREF << std::endl;
    
    std::cout << "• The value of the string variable " << mystr << std::endl;
    std::cout << "The value pointed to by stringPTR " << *stringPTR << std::endl;
    std::cout << "The value pointed to by stringREF " << stringREF << std::endl;
}