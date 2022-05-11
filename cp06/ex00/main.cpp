/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebeiline <ebeiline@42wolfsburg.de>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/10 20:17:29 by ebeiline          #+#    #+#             */
/*   Updated: 2022/05/10 20:20:09 by ebeiline         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int main(int argc, char **argv)
{
	if (argc != 2)
	{
		std::cout << "Incorrect number of arguments" << std::endl;
		return (0);
	}
	std::string str = argv[1];
	i = str.toInt();
	c = str.toChar();
	f = str.toFloat();
	d = str.toDouble();
	std::cout << "char: " << c << std::endl;
	std::cout << "int: " << i << std::endl;
	std::cout << "float: " << f << std::endl;
	std::cout << "double: " << d << std::endl;
	return (0);
}