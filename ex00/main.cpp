/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: larmenou <larmenou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/12 13:02:00 by larmenou          #+#    #+#             */
/*   Updated: 2024/01/15 15:06:34 by larmenou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

int main()
{
	{
		const Animal* meta = new Animal();
		const Animal* j = new Dog();
		const Animal* i = new Cat();

		std::cout << std::endl;

		std::cout << j->getType() << " " << std::endl;
		std::cout << i->getType() << " " << std::endl;
		std::cout << meta->getType() << " " << std::endl;
		i->makeSound(); //will output the cat sound!
		j->makeSound();
		meta->makeSound();

		std::cout << std::endl;

		delete meta;
		delete j;
		delete i;
	}
	{
		std::cout << std::endl;
		
		const Animal* meta = new Animal();
		const Dog* d = new Dog();
		const Cat* c = new Cat();
		//const Dog* a = new Animal(); // don't work
		//const Cat* t = new Animal(); // don't work

		std::cout << std::endl;

		std::cout << c->getType() << " " << std::endl;
		std::cout << d->getType() << " " << std::endl;
		std::cout << meta->getType() << " " << std::endl;
		c->makeSound(); //will output the cat sound!
		d->makeSound();
		meta->makeSound();

		std::cout << std::endl;

		delete meta;
		delete c;
		delete d;
	}
	{
		std::cout << std::endl;
		
		const WrongAnimal* meta = new WrongAnimal();
		const WrongAnimal* i = new WrongCat();

		std::cout << std::endl;

		std::cout << i->getType() << " " << std::endl;
		std::cout << meta->getType() << " " << std::endl;
		i->makeSound(); //will output the cat sound!
		meta->makeSound();

		std::cout << std::endl;

		delete meta;
		delete i;
	}
	return (0);
}