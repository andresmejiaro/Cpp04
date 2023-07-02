/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amejia <amejia@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/02 17:08:48 by amejia            #+#    #+#             */
/*   Updated: 2023/07/02 17:39:03 by amejia           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain(){
	for (int i = 0; i < 100; i++)
		ideas[i] = "";
}

Brain::~Brain(){
}

std::string Brain::getIdea(int i) const{
	return (ideas[i]);
}

Brain::Brain(const Brain &other){
	for (int i = 0; i < 100; i++)
		ideas[i] = other.getIdea(i);
}

Brain &Brain::operator=(const Brain &other){
	for (int i = 0; i < 100; i++)
		ideas[i] = other.getIdea(i);
	return (*this);
}

