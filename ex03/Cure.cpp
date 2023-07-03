#include "Cure.hpp"


Cure::Cure(): AMateria("cure"){
}

Cure::~Cure(){
	std::cout << "Cure Destroyed" << std::endl;
}

Cure::Cure(const Cure &other): AMateria(other){
	
}
Cure &Cure::operator=(const Cure &other){
	this->type = other.getType();
	return (*this);
}

Cure* Cure::clone() const{
	Cure *to_return = new Cure(*this);
	return (to_return);
}

void Cure::use(ICharacter& target){
	std::cout << "* heals " << target.getName() 
		<< " wounds *" << std::endl;
}