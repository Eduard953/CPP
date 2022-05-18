/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebeiline <ebeiline@42wolfsburg.de>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/18 14:50:38 by ebeiline          #+#    #+#             */
/*   Updated: 2022/05/18 14:57:40 by ebeiline         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Serial.hpp"
#include <iostream>

t_serial* deserialize(uintptr_t raw)
{
	return (reinterpret_cast<t_serial*>(raw));
}

uintptr_t serialize(t_serial* ptr)
{
	return (reinterpret_cast<uintptr_t>(ptr));
}

int main(void)
{
	t_serial s;

	s.example = 42;
	std::cout << "Serialized & Deserialized: " << deserialize(serialize(&s))->example << std::endl;
	return (0);
}