/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdouzi < mdouzi@student.1337.ma>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/19 18:33:31 by mdouzi            #+#    #+#             */
/*   Updated: 2023/10/19 19:14:01 by mdouzi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

HumanA::HumanA(std::string _name, Weapon &_wp) : wp(_wp)
{
    this->name = _name;
}

HumanA::~HumanA()
{
    
}

void HumanA::setWeapon(Weapon _wp)
{
    this->wp = _wp;
}

void HumanA::attack(void)
{
    std::cout << this->name << " attacks with his " << this-> wp.getType() << std::endl;
}

