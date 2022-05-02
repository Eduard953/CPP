/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebeiline <ebeiline@42wolfsburg.de>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/02 16:32:56 by ebeiline          #+#    #+#             */
/*   Updated: 2022/05/02 16:37:31 by ebeiline         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA_HPP
	# define HUMANA_HPP

#include "Weapon.hpp"

class HumanA
{
private:
	std::string	const _name;
	Weapon		&_weapon;
public:
	HumanA(std::string const name, Weapon &weapon);
	~HumanA();
	std::string const getName(void);
	void attack(void);
};

#endif // HUMANA_HPP
	