/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: larmenou <larmenou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/18 11:51:25 by larmenou          #+#    #+#             */
/*   Updated: 2024/01/23 11:44:37 by larmenou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cure.hpp"

Cure::Cure()
{
	this->_type = "cure";
}

Cure::Cure(std::string const & type)
{
	this->_type = type;
}

Cure::Cure(Cure& copy)
{
	this->_type = copy._type;
}

Cure::~Cure(){}

Cure& Cure::operator=(Cure& copy)
{
	if (this != &copy)
		this->_type = copy._type;
	return (*this);
}

std::string const & Cure::getType() const
{
	return (this->_type);
}

Cure* Cure::clone() const
{
	return (new Cure());
}

void Cure::use(ICharacter& target)
{
	std::cout << "* heals " << target.getName() << "'s wounds *" << std::endl;
}