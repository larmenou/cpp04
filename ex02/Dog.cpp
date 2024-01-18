/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: baloo <baloo@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/12 13:14:32 by larmenou          #+#    #+#             */
/*   Updated: 2024/01/17 12:31:08 by baloo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog()
{
	_type = "Dog";
	_brain = new Brain();
	std::cout << "Default Dog constructor called." << std::endl;
}

Dog::Dog(const Dog& copy)
{
	this->_type = copy._type;
	this->_brain = new Brain(*(copy._brain));
	std::cout << "Copy Dog constructor called." << std::endl;
}

Dog& Dog::operator=(const Dog& copy)
{
	if (this != &copy)
	{
		this->_type = copy._type;
		delete _brain;
		this->_brain = new Brain(*(copy._brain));
	}
	return (*this);
}

Dog::~Dog()
{
	delete _brain;
	std::cout << "Dog destructor called." << std::endl;
}

std::string Dog::getType() const
{
	return (_type);
}

void Dog::makeSound() const
{
	std::cout << "Wouf wouf" << std::endl;
}

Brain* Dog::getBrain() const
{
	return (this->_brain);
}