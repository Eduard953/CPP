/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebeiline <ebeiline@42wolfsburg.de>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/07 18:57:21 by ebeiline          #+#    #+#             */
/*   Updated: 2022/05/08 13:20:39 by ebeiline         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_HPP
	#define SCAVTRAP_HPP

#include "ClapTrap.hpp"

class ScavTrap : virtual public ClapTrap
{
	public:
		ScavTrap();
		ScavTrap(ScavTrap const &source);
		ScavTrap(std::string const name);
		virtual ~ScavTrap();
		ScavTrap &operator=(ScavTrap const &right);
		void guardGate();
		void attack(std::string const &target);

		void setEnergyPoints(void);
};

#endif // SCAVTRAP_HPP