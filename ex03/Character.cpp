/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amejia <amejia@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/02 21:09:45 by amejia            #+#    #+#             */
/*   Updated: 2023/07/03 00:21:34 by amejia           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"


Character::Character(): _name("Jhon Doe"){
	for (int i = 0; i < 4; i++)
		stuff[i] = NULL;	
}

Character::Character(std::string name): _name(name){
	for (int i = 0; i < 4; i++)
		stuff[i] = NULL;	
}

Character::~Character(){
	for (int i = 0; i < 4; i++)
	{
		if (stuff[i] != NULL)
			delete stuff[i];
	}
}

AMateria const *Character::pointStuff(int w) const{
	if (w < 4){
		return (this->stuff[w]);
	}
	return (NULL);
}

Character::Character(const Character &other): _name(other.getName()){
	for(int i = 0; i < 4; i++){
		if (other.pointStuff(i) != NULL){
			this->stuff[i] = other.pointStuff(i)->clone();
		}
		else
			this->stuff[i] = NULL;
	}
}

Character &Character::operator=(const Character &other){
	this->_name = other.getName();
	for(int i = 0; i < 4; i++){
		if (other.pointStuff(i) != NULL){
			this->stuff[i] = other.pointStuff(i)->clone();
		}
		else
			this->stuff[i] = NULL;
	}
	return (*this);
}

std::string const &Character::getName() const{
	return (this->_name);
}

void Character::equip(AMateria* m){
	for(int i = 0; i < 4; i++){
		if (this->stuff[i] == NULL){
			this->stuff[i] = m;
			break ;
		}
	}
}	

void Character::unequip(int idx){
	this->stuff[idx] = NULL;
}

void Character::use(int idx, ICharacter& target){
	if (this->stuff[idx]){
		this->stuff[idx]->use(target);
		delete this->stuff[idx];
		githis->stuff[idx] = NULL;
	}
}

