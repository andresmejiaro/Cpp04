/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amejia <amejia@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/27 23:47:41 by amejia            #+#    #+#             */
/*   Updated: 2023/07/02 17:37:28 by amejia           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog(): Animal(){
	std::cout << "Making a Dog" << std::endl;
	this->setType("Dog");
	this->gray = new Brain;
}

Dog::~Dog(){
	std::cout << "Destroying a Dog" << std::endl;
	delete this->gray;
}

Dog::Dog(const Dog &other){
	std::cout << "Making a copy Dog" << std::endl;
	this->setType(other.getType());
	this->gray = new Brain(other.exposeBrain());
}

Dog &Dog::operator=(const Dog &other){
	this->setType(other.getType());
	delete this->gray;
	this->gray = new Brain(other.exposeBrain());
	return(*this);
}

void	Dog::makeSound() const{
	std::cout << "Woof!" << std::endl;	
}

Brain	&Dog::exposeBrain() const{
	return(*this->gray);
}