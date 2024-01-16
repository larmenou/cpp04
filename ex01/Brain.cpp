/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: larmenou <larmenou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/15 15:14:59 by larmenou          #+#    #+#             */
/*   Updated: 2024/01/16 12:40:06 by larmenou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain()
{
	std::cout << "Brain default constructor called." << std::endl;
}

Brain::Brain(Brain& copy)
{
	for (int i=0; i < 100; i++)
		_ideas[i] = copy._ideas[i];
}

Brain& Brain::operator=(Brain& copy)
{
	for (int i=0; i < 100; i++)
		_ideas[i] = copy._ideas[i];
	return (*this);
}

Brain::~Brain()
{
	std::cout << "Brain destructor called" << std::endl;	
}

void Brain::setIdea(unsigned int index, std::string idea)
{
	this->_ideas[index] = idea;
}

std::string Brain::getIdea(unsigned int index) const
{
	return (this->_ideas[index]);
}