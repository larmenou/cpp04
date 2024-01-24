/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: larmenou <larmenou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/18 13:06:50 by larmenou          #+#    #+#             */
/*   Updated: 2024/01/24 16:49:39 by larmenou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"

Character::Character()
{
	std::cout << "Default Character constructor called" << std::endl;
	this->_name = "Character";
	for (int i = 0; i < 4; i++)
		this->_inventory[i] = NULL;
}

Character::Character(std::string name)
{
	std::cout << "Character constructor called" << std::endl;
	this->_name = name;
	for (int i = 0; i < 4; i++)
		this->_inventory[i] = NULL;
}

Character::Character(Character& copy)
{
	std::cout << "Copy Character constructor called" << std::endl;
	this->_name = copy._name + "_copy";
	for (int i = 0; i < 4; i++)
	{
		if (copy._inventory[i])
			this->_inventory[i] = copy._inventory[i]->clone();
		else
			this->_inventory[i] = 0;
	}
}

Character::~Character()
{
	std::cout << "Character destructor called" << std::endl;
	for (int i = 0; i < 4; i++)
	{
		if (this->_inventory[i])
			delete _inventory[i];
	}
}

Character& Character::operator=(Character& copy)
{
	std::cout << "Operator Character constructor called" << std::endl;
	if (this != &copy)
	{
		this->_name = copy._name + "_copy";
		for (int i = 0; i < 4; i++)
		{
			if (this->_inventory[i])
				delete _inventory[i];
			if (copy._inventory[i])
				this->_inventory[i] = copy._inventory[i]->clone();
		}
	}
	return (*this);
}

void Character::use(int idx, ICharacter& target)
{
	if (idx < 4 && idx > -1 && this->_inventory[idx])
		this->_inventory[idx]->use(target);
	else
		std::cout << this->getName() << ": * No Materia found for index: " << idx << " *" << std::endl;
}

std::string const & Character::getName() const
{
	return (this->_name);
}

void Character::equip(AMateria* m)
{
	for(int i = 0; i < 4; i++)
	{
		if (this->_inventory[i] == NULL && m != NULL)
		{
			this->_inventory[i] = m;
			return ;
		}
	}
}

void Character::unequip(int idx)
{
	if (idx < 4 && idx > -1 && this->_inventory[idx])
		this->_inventory[idx] = NULL;
	else
		std::cout << this->getName() << ": * No Materia found for index: " << idx << " *" << std::endl;
}

AMateria* Character::getAMateria(int idx)
{
	AMateria *tmp;
	if (idx < 4 && idx > -1 && this->_inventory[idx])
	{
		tmp = this->_inventory[idx];
		this->_inventory[idx] = 0;
		return (tmp);
	}
	return (NULL);
}
