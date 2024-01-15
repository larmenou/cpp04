/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: larmenou <larmenou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/12 13:14:28 by larmenou          #+#    #+#             */
/*   Updated: 2024/01/15 15:43:08 by larmenou         ###   ########.fr       */
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
	_type = copy._type;
	std::cout << "Copy Cat constructor called." << std::endl;
}

Cat& Cat::operator=(const Cat& copy)
{
	_type = copy._type;
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
