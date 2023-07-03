/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amejia <amejia@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/02 19:20:55 by amejia            #+#    #+#             */
/*   Updated: 2023/07/04 00:05:03 by amejia           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"

AMateria::AMateria(std::string const &type): type(type),is_being_used(false){	
	std::cout << "A Materia of type " << type << " was created." << std::endl;
}

AMateria::AMateria(): type("Undef"),is_being_used(false){
}

AMateria::~AMateria(){
}

AMateria::AMateria(const AMateria &other): type(other.getType()),
	is_being_used(false){
}

AMateria &AMateria::operator=(const AMateria &other){
	this->type = other.getType();
	return(*this);
}

std::string const & AMateria::getType() const{
	return (this->type);
} //Returns the materia type

void AMateria::use(ICharacter& target){
	std::cout << "* weird stuff happens to " << target.getName() 
		<< "*" << std::endl;
}

bool AMateria::getUsedState() const{
	return (this->is_being_used);
}

void AMateria::ChangeUsed(){
	if (this->is_being_used == true)
		this->is_being_used = false;
	else
		this->is_being_used = true;
			
}