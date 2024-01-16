/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: larmenou <larmenou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/12 13:14:32 by larmenou          #+#    #+#             */
/*   Updated: 2024/01/16 14:55:38 by larmenou         ###   ########.fr       */
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
	_type = copy._type;
	std::cout << "Copy Dog constructor called." << std::endl;
}

Dog& Dog::operator=(const Dog& copy)
{
	if (this != &copy)
	{
		std::cout << "OK" << std::endl;
		_type = copy._type;
		delete _brain;
		_brain = new Brain();
		for(int i = 0; i < 100; i++)
			_brain->setIdea(i, copy._brain->getIdea(i));
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

Brain* Dog::getBrain()
{
	return (this->_brain);
}