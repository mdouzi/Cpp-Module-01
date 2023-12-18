/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdouzi < mdouzi@student.1337.ma>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/13 19:48:16 by mdouzi            #+#    #+#             */
/*   Updated: 2023/10/13 20:25:05 by mdouzi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"


void Zombie::announce(void)
{
    std::cout<<this->Name<<": BraiiiiiiinnnzzzZ..."<<std::endl;
}

Zombie::Zombie(std::string name)
{
    this->Name = name;
    std::cout<<"this Zombie " << this->Name << " Created !"<<std::endl;
}

Zombie:: ~Zombie(void)
{
    std::cout <<"this Zombie " << this->Name<<" Destroyed !"<<std::endl;
}
