/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amejia <amejia@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/02 20:40:29 by amejia            #+#    #+#             */
/*   Updated: 2023/07/03 19:40:36 by amejia           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Ice.hpp"


Ice::Ice(): AMateria("ice"){
}

Ice::~Ice(){
	std::cout << "Ice Destroyed" << std::endl;
}

Ice::Ice(const Ice &other): AMateria(other){
	
}
Ice &Ice::operator=(const Ice &other){
	this->type = other.getType();
	return (*this);
}

Ice* Ice::clone() const{
	Ice *to_return = new Ice(*this);
	return (to_return);
}

void Ice::use(ICharacter& target){
	std::cout << "* shoot an ice bolt to " << target.getName() 
		<< " *" << std::endl;
}