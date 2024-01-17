/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: baloo <baloo@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/12 13:02:00 by larmenou          #+#    #+#             */
/*   Updated: 2024/01/17 12:41:43 by baloo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"

int main()
{
	{
		std::cout << "First test:" << std::endl;
		const Animal* j = new Dog();
		const Animal* i = new Cat();

		std::cout << std::endl;
		
		delete j;//should not create a leak
		delete i;
	}
	{
		std::cout << std::endl;
		std::cout << "Second test:" << std::endl;
		Dog dog;
		Dog copy(dog);

		std::cout << std::endl;
		
		std::cout << dog.getType() << std::endl;
		std::cout << copy.getType() << std::endl;

		std::cout << dog.getBrain()->getIdea(5) << std::endl;
		std::cout << copy.getBrain()->getIdea(5) << std::endl;
		dog.getBrain()->setIdea(5, "Ecureuil !");
		
		std::cout << dog.getBrain()->getIdea(5) << std::endl;
		std::cout << copy.getBrain()->getIdea(5) << std::endl;
	}
	{
		std::cout << std::endl;
		std::cout << "Third test" << std::endl;
		
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