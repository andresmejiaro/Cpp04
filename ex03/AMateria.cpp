/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amejia <amejia@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/02 19:20:55 by amejia            #+#    #+#             */
/*   Updated: 2023/07/02 23:52:04 by amejia           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"

AMateria::AMateria(std::string const &type){
	this->type = type;
}

AMateria::AMateria(){
	this->type = "Undef";
}

AMateria::~AMateria(){
}

AMateria::AMateria(const AMateria &other): type(other.getType()){
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