/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdouzi < mdouzi@student.1337.ma>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/14 15:18:41 by mdouzi            #+#    #+#             */
/*   Updated: 2023/10/14 16:03:43 by mdouzi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP

#include <iostream>

class Zombie 
{
    private:
        std::string Name;
    public:
        Zombie(void);
        ~Zombie(void);
        void setName(std::string);
        void announce(void);
};

Zombie* zombieHorde(int N, std::string name);

#endif