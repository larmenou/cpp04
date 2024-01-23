/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: larmenou <larmenou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/18 11:30:56 by larmenou          #+#    #+#             */
/*   Updated: 2024/01/23 11:25:20 by larmenou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ICE_HPP
# define ICE_HPP

# include <string>
# include <iostream>

# include "ICharacter.hpp"

class Ice : public AMateria
{
	public:
		Ice();
		Ice(std::string const & type);
		Ice(Ice& copy);
		virtual ~Ice();
		
		Ice& operator=(Ice& copy);

		std::string const & getType() const; //Returns the materia type
		virtual Ice* clone() const;
		virtual void use(ICharacter& target);
};

#endif