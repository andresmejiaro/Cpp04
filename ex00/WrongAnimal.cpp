/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amejia <amejia@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/27 21:22:29 by amejia            #+#    #+#             */
/*   Updated: 2023/06/27 23:56:34 by amejia           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal(){
	std::cout << "Making a Wrong Animal" << std::endl;

}

WrongAnimal::~WrongAnimal(){
	std::cout << "Destroying a Wrong Animal" << std::endl;
}

WrongAnimal::WrongAnimal(const WrongAnimal &other): _type(other.getType()){
	std::cout << "Copying a Wrong Animal" << std::endl;
}

WrongAnimal &WrongAnimal::operator=(const WrongAnimal &other){
	this->_type = other.getType();
	return (*this);
}

void WrongAnimal::setType(std::string type){
	this->_type = type;
}

std::string WrongAnimal::getType() const{
	return(this->_type);
}

void	WrongAnimal::makeSound() const{
		std::cout << "Explosion!" << std::endl;	
}