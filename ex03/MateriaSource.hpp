/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: larmenou <larmenou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/19 11:31:03 by larmenou          #+#    #+#             */
/*   Updated: 2024/01/23 11:26:46 by larmenou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MATERIASOURCE_HPP
# define MATERIASOURCE_HPP

# include "AMateria.hpp"
# include "IMateriaSource.hpp"

class MateriaSource : public IMateriaSource
{
	public:
		MateriaSource();
		MateriaSource(MateriaSource& copy);
		MateriaSource& operator=(MateriaSource& copy);
		virtual ~MateriaSource();
		
		virtual void learnMateria(AMateria*);
		virtual AMateria* createMateria(std::string const & type);

	private:
		AMateria* _inventory[4];
};

#endif