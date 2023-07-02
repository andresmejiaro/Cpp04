/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amejia <amejia@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/27 23:43:16 by amejia            #+#    #+#             */
/*   Updated: 2023/07/02 16:38:06 by amejia           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat(): Animal(){
	std::cout << "Making a Cat" << std::endl;
	this->setType("Cat");
}

Cat::~Cat(){
	std::cout << "Destroying a Cat" << std::endl;
}

Cat::Cat(const Cat &other){
	std::cout << "Making a copy Cat" << std::endl;
	this->setType(other.getType());
}

Cat &Cat::operator=(const Cat &other){
	this->setType(other.getType());
	return (*this);
}

void	Cat::makeSound() const{
		std::cout << "Meow!" << std::endl;	
}