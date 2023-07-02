/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amejia <amejia@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/27 23:47:41 by amejia            #+#    #+#             */
/*   Updated: 2023/07/02 16:39:09 by amejia           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog(): Animal(){
	std::cout << "Making a Dog" << std::endl;
	this->setType("Dog");
}

Dog::~Dog(){
	std::cout << "Destroying a Dog" << std::endl;
}

Dog::Dog(const Dog &other){
	std::cout << "Making a copy Dog" << std::endl;
	this->setType(other.getType());
}

Dog &Dog::operator=(const Dog &other){
	this->setType(other.getType());
	return(*this);
}

void	Dog::makeSound() const{
	std::cout << "Woof!" << std::endl;	
}