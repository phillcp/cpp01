/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fheaton- <fheaton-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/14 17:06:26 by fheaton-          #+#    #+#             */
/*   Updated: 2023/01/14 18:09:40 by fheaton-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <Zombie.hpp>
#include <iostream>
#include <string>

Zombie::Zombie(std::string name){
	this->_name = name;
}

Zombie::~Zombie(){
	std::cout << this->_name << std::endl;
}

void Zombie::announce(){
	std::cout << this->_name << ": BraaaaaiiiinnnnzzzzZ..." << std::endl;
}
