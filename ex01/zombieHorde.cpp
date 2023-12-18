  /* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdouzi < mdouzi@student.1337.ma>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/14 15:26:28 by mdouzi            #+#    #+#             */
/*   Updated: 2023/10/14 15:54:24 by mdouzi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie* zombieHorde(int N, std::string name)
{
    Zombie* newZombie = new Zombie[N];
    for(int i = 0; i < N; i++) {
        newZombie[i].setName(name);
    }
    return(newZombie);
}