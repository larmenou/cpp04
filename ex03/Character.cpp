/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: larmenou <larmenou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/18 13:06:50 by larmenou          #+#    #+#             */
/*   Updated: 2024/01/19 11:34:46 by larmenou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"

Character::Character()
{
	this->_name = "Character";
}

Character::Character(std::string name)
{
	this->_name = name;
}

Character::Character(Character& copy)
{
	this->_name = copy._name;
}

Character::~Character(){}

Character& Character::operator=(Character& copy)
{
	if (this != &copy)
	{
		this->_name = copy._name;
	}
	return (*this);
}

void Character::use(int idx, ICharacter& target)
{
	this->_inventory[idx]->use(target);	
}

void Character::equip(AMateria* m)
{
	for(int i = 0; i < 4; i++)
	{
		if (this->_inventory[i] == NULL)
		{
			this->_inventory[i] = m;
			break ;
		}
	}
}