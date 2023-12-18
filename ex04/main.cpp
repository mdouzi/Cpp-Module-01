/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdouzi < mdouzi@student.1337.ma>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/19 19:18:04 by mdouzi            #+#    #+#             */
/*   Updated: 2023/10/22 02:15:27 by mdouzi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>
#include <string>

int replace(char **argv, std::string str) {
    std::ofstream outfile;
    int pos = 0;

    outfile.open((std::string(argv[1]) + ".replace").c_str());
    if (outfile.fail()) {
        return 1;
    }

    while ((pos = str.find(argv[2], pos)) && pos != -1) 
    {
        outfile << str.substr(0, pos) << argv[3];
        pos += std::string(argv[2]).size();
        str = str.substr(pos);
        pos = 0;
    }

    outfile << str; 
    outfile.close();
    return 0;
}

int main(int argc, char **argv) {
    std::ifstream infile;
    std::string line;
    char rd;

    if (argc != 4) {
        std::cout << "usage: replace <file> old_word new_word" << std::endl;
        return 1;
    }
    infile.open(argv[1]);
    if (infile.fail()) {
        std::cout << "Error: " << argv[1] << ": no such file or directory" << std::endl;
        return 1;
    }
    while (infile.get(rd)) {
        line += rd;
    }
    infile.close();
    return replace(argv, line);
}
