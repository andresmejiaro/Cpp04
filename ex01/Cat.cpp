/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amejia <amejia@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/27 23:43:16 by amejia            #+#    #+#             */
/*   Updated: 2023/07/02 17:40:14 by amejia           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat(): Animal(){
	std::cout << "Making a Cat" << std::endl;
	this->setType("Cat");
	this->gray = new Brain;
}

Cat::~Cat(){
	std::cout << "Destroying a Cat" << std::endl;
	delete this->gray;
}

Cat::Cat(const Cat &other){
	std::cout << "Making a copy Cat" << std::endl;
	this->setType(other.getType());
	this->gray = new Brain(other.exposeBrain());
}

Cat &Cat::operator=(const Cat &other){
	this->setType(other.getType());
	delete this->gray;
	this->gray = new Brain(other.exposeBrain());
	return (*this);
}

void	Cat::makeSound() const{
		std::cout << "Meow!" << std::endl;	
}

Brain	&Cat::exposeBrain() const{
	return(*this->gray);
}
