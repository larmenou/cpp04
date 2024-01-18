/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: larmenou <larmenou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/12 13:02:00 by larmenou          #+#    #+#             */
/*   Updated: 2024/01/18 10:15:26 by larmenou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AAnimal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"

int main()
{
	{
		std::cout << "First test:" << std::endl;
		const AAnimal* j = new Dog();
		const AAnimal* i = new Cat();
		//AAnimal* a = new AAnimal(); // don't work because it's abstract

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
		
		AAnimal* meta[10];
		
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