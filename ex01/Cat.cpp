/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: baloo <baloo@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/12 13:14:28 by larmenou          #+#    #+#             */
/*   Updated: 2024/01/17 14:13:14 by baloo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat()
{
	_type = "Cat";
	_brain = new Brain();
	std::cout << "Default Cat constructor called." << std::endl;
}

Cat::Cat(const Cat& copy)
{
	this->_type = copy._type;
	this->_brain = new Brain(*(copy._brain));
	std::cout << "Copy Cat constructor called." << std::endl;
}

Cat& Cat::operator=(const Cat& copy)
{
	if (this != &copy)
	{
		this->_type = copy._type;
		delete _brain;
		this->_brain = new Brain(*(copy._brain));
	}
	return (*this);
}

Cat::~Cat()
{
	delete _brain;
	std::cout << "Cat destructor called." << std::endl;
}

std::string Cat::getType() const
{
	return (_type);
}

void Cat::makeSound() const
{
	std::cout << "Miaouuuu" << std::endl;
}

Brain* Dog::getBrain() const
{
	return (this->_brain);
}
