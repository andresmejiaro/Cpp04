/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amejia <amejia@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/27 23:43:16 by amejia            #+#    #+#             */
/*   Updated: 2023/07/02 17:03:16 by amejia           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

WrongCat::WrongCat(): WrongAnimal(){
	std::cout << "Making a WrongCat" << std::endl;
	this->setType("WrongCat");
}

WrongCat::~WrongCat(){
	std::cout << "Destroying a WrongCat" << std::endl;
}

WrongCat::WrongCat(const WrongCat &other){
	std::cout << "Copyinh a WrongCat" << std::endl;
	this->setType(other.getType());
}

WrongCat &WrongCat::operator=(const WrongCat &other){
	this->setType(other.getType());
	return (*this);
}

void	WrongCat::makeSound() const{
		std::cout << "Miau!" << std::endl;	
}