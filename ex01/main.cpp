/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: larmenou <larmenou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/12 13:02:00 by larmenou          #+#    #+#             */
/*   Updated: 2024/01/16 14:20:39 by larmenou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"

int main()
{
	{
		const Animal* j = new Dog();
		const Animal* i = new Cat();

		std::cout << std::endl;
		
		delete j;//should not create a leak
		delete i;
	}
	{
		std::cout << std::endl;
		
		Animal* meta[10];
		
		for (int i = 0; i < 5; i++)
			meta[i] = new Dog();
		for(int i = 5; i < 10; i++)
			meta[i] = new Cat();
		
		std::cout << std::endl;

		for(int i = 0; i < 10; i++)
			meta[i]->makeSound();
		
		std::cout << std::endl;
		
		for(int i = 0; i < 10; i++)
			delete meta[i];
	}
	return (0);
}