/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebeiline <ebeiline@42wolfsburg.de>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/03 12:11:18 by ebeiline          #+#    #+#             */
/*   Updated: 2023/05/03 12:38:57 by ebeiline         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <stack>
#include <cstdlib>

static bool isoperator(char c)
{
	if (c == '+' || c == '-' || c == '*' || c == '/' || c == '%')
		return true;
	return false;
}

static bool isdigit(char c)
{
	if (c >= '0' && c <= '9')
		return true;
	return false;
}

float perform_operation(char token, int a, int b)
{
	// addition
	if (token == '+')
		return (b + a);
	// subtraction
	else if (token == '-')
		return (b - a);
	// multiplication	
	else if (token == '*')
		return (b * a);
	// division
	else if (token == '/')
	{
		if (a == 0)
		{
			std::cerr << "Error: division by zero\n";
			exit(1);
		}
		return (b / a);
	}
	else
	{
		std::cerr << "Error: Token unknown\n";
		exit(1);
	}
}

int main(int argc, char **argv)
{
	if (argc != 2) {
		std::cout << "Error: wrong number of arguments\n";
		return 1;
	}
	
	std::string str = argv[1];
	
	std::string::iterator it;
	std::stack<int> stack;

	for (it=str.begin(); it != str.end(); it++)
	{
		if (*it == ' ')
			continue;
		else if (isoperator(*it))
		{
			int a = stack.top();
			stack.pop();
			int b = stack.top();
			stack.pop();
			stack.push(perform_operation(*it, a, b));
		}
		else if (isdigit(*it))
			stack.push(*it - '0');
		else
		{
			std::cerr << "Error: invalid input\n";
			return 1;
		}
	}
	if (stack.size() != 1)
	{
		std::cerr << "Error: invalid input, operator missing\n";
		return 1;
	}
	std::cout << "Result: " << stack.top() << std::endl;
	return 0;
}