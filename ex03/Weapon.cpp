/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdouzi < mdouzi@student.1337.ma>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/19 18:14:37 by mdouzi            #+#    #+#             */
/*   Updated: 2023/10/22 02:13:09 by mdouzi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon(std::string _type)
{
    this->type = _type;
}
 
Weapon::~Weapon()
{
    
}

const std::string& Weapon::getType(void) 
{
    return type;
}

void Weapon::setType(std::string Type)
{
    this->type = Type;
}
