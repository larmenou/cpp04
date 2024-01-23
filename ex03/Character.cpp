/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: larmenou <larmenou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/18 13:06:50 by larmenou          #+#    #+#             */
/*   Updated: 2024/01/23 13:59:01 by larmenou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"

Character::Character()
{
	this->_name = "Character";
	for (int i = 0; i < 4; i++)
		this->_inventory[i] = NULL;
}

Character::Character(std::string name)
{
	this->_name = name;
	for (int i = 0; i < 4; i++)
		this->_inventory[i] = NULL;
}

Character::Character(Character& copy)
{
	this->_name = copy._name;
	for (int i = 0; i < 4; i++)
	{
		if (this->_inventory[i])
			delete _inventory[i];
		if (copy._inventory[i])
			this->_inventory[i] = copy._inventory[i];
	}
}

Character::~Character()
{
	for (int i = 0; i < 4; i++)
	{
		if (this->_inventory[i])
			delete _inventory[i];
	}
}

Character& Character::operator=(Character& copy)
{
	if (this != &copy)
	{
		this->_name = copy._name;
		for (int i = 0; i < 4; i++)
		{
			if (this->_inventory[i])
				delete _inventory[i];
			if (copy._inventory[i])
				this->_inventory[i] = copy._inventory[i];
		}
	}
	return (*this);
}

void Character::use(int idx, ICharacter& target)
{
	if (this->_inventory[idx])
		this->_inventory[idx]->use(target);	
}

std::string const & Character::getName() const
{
	return (this->_name);
}

void Character::equip(AMateria* m)
{
	for(int i = 0; i < 4; i++)
	{
		if (this->_inventory[i] == NULL)
		{
			this->_inventory[i] = m;
			return ;
		}
	}
}

void Character::unequip(int idx)
{
	if (this->_inventory[idx])
		this->_inventory[idx] = NULL;
}

AMateria* Character::getAMateria(int idx)
{
	if (this->_inventory[idx])
		return (this->_inventory[idx]);
	return (NULL);
}
