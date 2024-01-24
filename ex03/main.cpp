/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: larmenou <larmenou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/19 11:26:49 by larmenou          #+#    #+#             */
/*   Updated: 2024/01/24 17:06:58 by larmenou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"
#include "Character.hpp"
#include "Cure.hpp"
#include "Ice.hpp"
#include "MateriaSource.hpp"

int main()
{
	std::cout << "SUBJECT TEST" << std::endl;
	std::cout << std::endl;

	IMateriaSource* src = new MateriaSource();
	src->learnMateria(new Ice());
	src->learnMateria(new Cure());
	{
		
		ICharacter* me = new Character("me");
		
		AMateria* tmp;
		tmp = src->createMateria("ice");
		me->equip(tmp);
		tmp = src->createMateria("cure");
		me->equip(tmp);
		tmp = src->createMateria("gun");
		me->equip(tmp);
		
		ICharacter* bob = new Character("bob");
		
		me->use(0, *bob);
		me->use(1, *bob);

		tmp = me->getAMateria(0);
		delete tmp;
		me->unequip(0);
		me->use(0, *bob);
		me->use(1, *bob);
		me->use(2, *bob);
		tmp = src->createMateria("ice");
		me->equip(tmp);
		me->use(0, *bob);
		me->use(3, *bob);
		me->use(-42, *bob);
		me->use(42, *bob);
		tmp = src->createMateria("ice");
		me->equip(tmp);
		tmp = src->createMateria("ice");
		me->equip(tmp);
		tmp = src->createMateria("ice");
		me->equip(tmp);
		me->use(0, *bob);
		me->use(1, *bob);
		me->use(2, *bob);
		me->use(3, *bob);
		me->use(4, *bob);

		delete bob;
		delete me;
	}

	std::cout << std::endl;
	std::cout << "DEEP COPY TEST" << std::endl;
	std::cout << std::endl;

	{
		AMateria* tmp;
		AMateria* tmp_alice;
		Character *alice = new Character("Alice");
		
		tmp_alice = src->createMateria("cure");
		alice->equip(tmp_alice);
		tmp = src->createMateria("heal");
		alice->equip(tmp);
		tmp_alice = src->createMateria("ice");
		alice->equip(tmp_alice);
		
		Character *alice_copy = new Character(*alice);

		alice->use(0, *alice_copy);
		alice->use(1, *alice_copy);
		alice->use(2, *alice_copy);
		
		alice_copy->use(0, *alice);
		alice_copy->use(1, *alice);
		alice_copy->use(2, *alice);
		
		tmp = alice->getAMateria(1);
		delete tmp;
		alice->unequip(-42);

		alice->use(1, *alice_copy);
		alice_copy->use(1, *alice);

		delete alice;
		delete alice_copy;
	}

	std::cout << std::endl;
	std::cout << "DEEP COPY TEST OPERATOR=" << std::endl;
	std::cout << std::endl;

	{
		AMateria* tmp;
		AMateria* tmp_alice;
		Character alice;
		
		tmp_alice = src->createMateria("cure");
		alice.equip(tmp_alice);
		tmp = src->createMateria("heal");
		alice.equip(tmp);
		tmp_alice = src->createMateria("ice");
		alice.equip(tmp_alice);
		
		Character alice_copy;

		alice_copy = alice;

		alice.use(0, alice_copy);
		alice.use(1, alice_copy);
		alice.use(2, alice_copy);
		
		alice_copy.use(0, alice);
		alice_copy.use(1, alice);
		alice_copy.use(2, alice);
		
		tmp = alice.getAMateria(1);
		delete tmp;
		alice.unequip(1);

		alice.use(1, alice_copy);
		alice_copy.use(1, alice);
	}
	delete src;

	return (0);
}
