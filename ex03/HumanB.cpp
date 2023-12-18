/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdouzi < mdouzi@student.1337.ma>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/19 18:43:24 by mdouzi            #+#    #+#             */
/*   Updated: 2023/10/19 19:08:35 by mdouzi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::HumanB(std::string _name)
{ 
    this->wp = (NULL);
    this->name = _name;
}
HumanB::~HumanB()
{
    
}

void HumanB::setWeapon(Weapon &_wp)
{
    this->wp = &_wp;
}

void HumanB::attack(void)
{
    std::cout << this->name << " attacks with his " << this-> wp->getType() << std::endl;
}
