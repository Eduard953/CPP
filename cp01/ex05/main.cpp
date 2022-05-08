/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebeiline <ebeiline@42wolfsburg.de>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/01 19:49:14 by ebeiline          #+#    #+#             */
/*   Updated: 2022/05/04 18:27:27 by ebeiline         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"


int	main(void)
{
	Harl	fake_karen;

	fake_karen.complain("debug");
	fake_karen.complain("error");
	fake_karen.complain("warning");
	fake_karen.complain("info");
	fake_karen.complain("who knows");
}
