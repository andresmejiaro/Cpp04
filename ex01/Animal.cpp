/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amejia <amejia@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/27 21:22:29 by amejia            #+#    #+#             */
/*   Updated: 2023/07/02 16:38:40 by amejia           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal(){
	std::cout << "Making an Animal" << std::endl;
}

Animal::~Animal(){
	std::cout << "Destroying an Animal" << std::endl;
}

Animal::Animal(const Animal &other): _type(other.getType()){
	std::cout << "Making an Animal: " << this->_type << std::endl;
}

Animal &Animal::operator=(const Animal &other){
	this->_type = other.getType();
	return (*this);
}

void Animal::setType(std::string type){
	this->_type = type;
}

std::string Animal::getType() const{
	return(this->_type);
}

void	Animal::makeSound() const{
		std::cout << "Laser Beam!" << std::endl;	
}