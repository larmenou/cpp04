/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: larmenou <larmenou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/18 11:27:34 by larmenou          #+#    #+#             */
/*   Updated: 2024/01/24 13:02:48 by larmenou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CURE_HPP
# define CURE_HPP

# include <string>
# include <iostream>

# include "AMateria.hpp"

class Cure : public AMateria
{
	public:
		Cure();
		Cure(std::string const & type);
		Cure(Cure& copy);
		virtual ~Cure();
		
		Cure& operator=(Cure& copy);

		std::string const & getType() const; //Returns the materia type
		virtual Cure* clone() const;
		virtual void use(ICharacter& target);
};

#endif