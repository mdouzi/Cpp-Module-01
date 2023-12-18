/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdouzi < mdouzi@student.1337.ma>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/20 21:50:11 by mdouzi            #+#    #+#             */
/*   Updated: 2023/10/22 02:33:02 by mdouzi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

Harl::Harl(void)
{
    
}
Harl::~Harl(void)
{
    

}
void Harl::debug(void)
{
    std::cout <<"DEBUG: ";
    std::cout <<"I love having extra bacon ";
    std:: cout <<"for my 7XL-double-cheese-triple-pickle-special-ketchup burger.";
    std::cout<<" I really do!" << std::endl;
}

void Harl::info( void )
{
    std::cout<<"INFOT: ";
    std::cout<<"I cannot believe adding extra bacon costs more money.";
    std::cout<<" You didn’t put enough bacon in my burger! If you did,";
    std::cout<<" I wouldn’t be asking for more!"<<std::endl;
}

void Harl::warning( void )
{
    std::cout<< "WARNING: ";
    std::cout<< "I think I deserve to have some extra bacon for free.";
    std::cout<< "been coming for";
    std::cout<<"years whereas you started working here since last month."<<std::endl;
}

void Harl::error(void)
{
    std::cout<<"ERROR: ";
    std::cout <<"This is unacceptable! I want to speak to the manager now."<< std::endl;
}


void Harl::complain(std::string level) 
{
    std::string fName[4] = {"DEBUG", "ERROR", "INFO", "WARNING"};

    void (Harl::*fptr[4])(void) = {&Harl::debug, &Harl::error, &Harl::info, &Harl::warning};

    int i = -1;
    for (int j = 0; j < 4; ++j) 
    {
        if (level == fName[j]) 
        {
            i = j;
            break;
        }
    }

    switch (i) {
        case 0:
            (this->*fptr[0])();
            break;
        case 1:
            (this->*fptr[1])();
            break;
        case 2:
            (this->*fptr[2])();
            break;
        case 3:
            (this->*fptr[3])();
            break;
        default:
            std::cout << "Unknown log level: " << level << std::endl;
            break;
    }
}
