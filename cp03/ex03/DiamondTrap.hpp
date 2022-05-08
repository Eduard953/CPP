/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebeiline <ebeiline@42wolfsburg.de>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/08 12:55:08 by ebeiline          #+#    #+#             */
/*   Updated: 2022/05/08 13:13:22 by ebeiline         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#ifndef DIAMONDTRAP_HPP
	# define DIAMONDTRAP_HPP

#include "FragTrap.hpp"
#include "ScavTrap.hpp"


class DiamondTrap : public FragTrap, public ScavTrap
{
	private:
		std::string _name;
	public:
		DiamondTrap();
		DiamondTrap(DiamondTrap const &source);
		DiamondTrap(std::string const name);
		~DiamondTrap();
		DiamondTrap &operator=(DiamondTrap const &right);
		
		using ScavTrap::attack;
		void whoAmI(void);
}

#endif // DIAMONDTRAP_HPP