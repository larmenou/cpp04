/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: larmenou <larmenou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/15 15:15:01 by larmenou          #+#    #+#             */
/*   Updated: 2024/01/16 12:40:02 by larmenou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_HPP
# define BRAIN_HPP

# include <string>
# include <iostream>

class Brain
{
	public:
		Brain();
		Brain(Brain& copy);
		Brain& operator=(Brain& copy);
		~Brain();

		void setIdea(unsigned int index, std::string idea);
		std::string getIdea(unsigned int index) const;

	private:
		std::string _ideas[100];
};

#endif