/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amejia <amejia@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/02 22:29:35 by amejia            #+#    #+#             */
/*   Updated: 2023/07/02 23:56:17 by amejia           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MateriaSource.hpp"

MateriaSource::MateriaSource(){
	for (int i = 0; i < 4; i++)
		stuff[i] = NULL;	
}

MateriaSource::~MateriaSource(){
		for (int i = 0; i < 4; i++)
	{
		if (stuff[i] != NULL)
			delete stuff[i];
	}
}

MateriaSource::MateriaSource(const MateriaSource &other){
	for(int i = 0; i < 4; i++){
		if (other.pointStuff(i) != NULL){
			this->stuff[i] = other.pointStuff(i)->clone();
		}
		else
			this->stuff[i] = NULL;
	}
}

AMateria *MateriaSource::pointStuff(int w) const{
	if (w < 4){
		return (this->stuff[w]);
	}
	return (NULL);
}

MateriaSource &MateriaSource::operator=(const MateriaSource &other){
	for(int i = 0; i < 4; i++){
		if (other.pointStuff(i) != NULL){
			this->stuff[i] = other.pointStuff(i)->clone();
		}
		else
			this->stuff[i] = NULL;
	}
	return (*this);
}

void MateriaSource::learnMateria(AMateria* src){
	for(int i = 0; i < 4; i++){
		if (this->stuff[i] == NULL){
			this->stuff[i] = src->clone();
			break ;
		}
	}	
}

AMateria* MateriaSource::createMateria(std::string const & type){
	for(int i = 0; i < 4; i++){
		if (this->stuff[i] && this->stuff[i]->getType() == type){
			return (this->stuff[i]->clone());
		}
	}
	return (NULL);
}
