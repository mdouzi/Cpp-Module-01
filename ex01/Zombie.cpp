/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdouzi < mdouzi@student.1337.ma>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/14 15:26:21 by mdouzi            #+#    #+#             */
/*   Updated: 2023/10/14 16:03:46 by mdouzi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

void Zombie::setName(std::string name)
{
    this->Name = name;
}

void Zombie::announce(void)
{
    std::cout<<this->Name<<": BraiiiiiiinnnzzzZ..."<<std::endl;
}

Zombie::Zombie(void)
{
    std::cout<<"Zombie Created !"<<std::endl;
}

Zombie:: ~Zombie(void)
{
    std::cout <<"this Zombie " << this->Name<<" Destroyed !"<<std::endl;
}
