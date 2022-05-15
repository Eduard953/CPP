/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebeiline <ebeiline@42wolfsburg.de>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/10 20:17:29 by ebeiline          #+#    #+#             */
/*   Updated: 2022/05/15 13:08:30 by ebeiline         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cast.hpp"

int main(int argc, char **argv)
{
	if (argc != 2)
	{
		std::cout << "Incorrect number of arguments" << std::endl;
		return (0);
	}
	
	Cast c(argv[1]);
	
	std::cout << c << std::endl;
	
	return (0);
}
