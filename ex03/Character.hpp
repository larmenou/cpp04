/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: larmenou <larmenou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/18 12:48:09 by larmenou          #+#    #+#             */
/*   Updated: 2024/01/24 12:52:47 by larmenou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHARACTER_HPP
# define CHARACTER_HPP

# include <string>
# include <iostream>

# include "ICharacter.hpp"

class Character : public ICharacter
{
	protected:
		std::string _name;
		AMateria* _inventory[4];
		
	public:
		Character();
		Character(std::string name);
		Character(Character& copy);
		~Character();
		
		Character& operator=(Character& copy);

		virtual std::string const & getName() const;
		virtual void equip(AMateria* m);
		virtual void unequip(int idx);
		virtual void use(int idx, ICharacter& target);
		virtual AMateria* getAMateria(int idx);
};

#endif