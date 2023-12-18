/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdouzi < mdouzi@student.1337.ma>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/20 21:47:41 by mdouzi            #+#    #+#             */
/*   Updated: 2023/10/22 02:28:56 by mdouzi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HARL_HPP
#define HARL_HPP
#include <iostream>


class Harl
{
public:
    Harl();
    ~Harl();
    void complain(std::string level);

private:
    void debug();
    void info();
    void warning();
    void error();
};

#endif

