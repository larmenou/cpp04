/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: larmenou <larmenou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/12 13:14:28 by larmenou          #+#    #+#             */
/*   Updated: 2024/01/12 13:21:19 by larmenou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat()
{
	_type = "Cat";
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
	std::cout << "Destructor Cat called." << std::endl;
}
