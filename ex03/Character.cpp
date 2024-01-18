/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: larmenou <larmenou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/18 13:06:50 by larmenou          #+#    #+#             */
/*   Updated: 2024/01/18 13:07:52 by larmenou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"

Character::Character()
{
	this->_name = "Character";
}

Character::Character(std::string const & type)
{
	this->_type = type;
}

Character::Character(Character& copy)
{
	this->_type = copy._type;
}

Character::~Character(){}

Character& Character::operator=(Character& copy)
{
	if (this != &copy)
		this->_type = copy._type;
	return (*this);
}

std::string const & Character::getType() const
{
	return (this->_type);
}

Character* Character::clone() const
{
	Character *i = new Character();
	return (i);
}

void Character::use(ICharacter& target)
{
	std::cout << "* shoots an Character bolt at " << target.getName() << " *"<< std::endl;
}