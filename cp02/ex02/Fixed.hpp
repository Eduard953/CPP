/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebeiline <ebeiline@42wolfsburg.de>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/04 18:36:37 by ebeiline          #+#    #+#             */
/*   Updated: 2022/05/05 11:55:52 by ebeiline         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
	# define FIXED_HPP

# include <iostream>
# include <cmath>
# include <ostream>

class Fixed {
	private:
		int					_value;
		static const int	_bits = 8;
	public:
		Fixed();
		Fixed(const int n);
		Fixed(const float n);
		Fixed(Fixed const &src);
		~Fixed();
		
		Fixed &operator=(Fixed const &src);
		
		bool operator>(Fixed const &cmp) const;
		bool operator<(Fixed const &cmp) const;
		bool operator>=(Fixed const &cmp) const;
		bool operator<=(Fixed const &cmp) const;
		bool operator==(Fixed const &cmp) const;
		bool operator!=(Fixed const &cmp) const;

		Fixed operator+(Fixed const &rhs) const;
		Fixed operator-(Fixed const &rhs) const;
		Fixed operator*(Fixed const &rhs) const;
		Fixed operator/(Fixed const &rhs) const;

		Fixed &operator++(void);
		Fixed &operator--(void);
		Fixed operator++(int);
		Fixed operator--(int);

		static Fixed	const &max(Fixed const &a, Fixed const &b);
		static Fixed	&max(Fixed &a, Fixed &b);
		static Fixed	const &min(Fixed const &a, Fixed const &b);
		static Fixed	&min(Fixed &a, Fixed &b);

		int		getRawBits() const;
		void	setRawBits(int const raw);
		float	toFloat() const;
		int		toInt() const;
};

std::ostream &operator<<(std::ostream &out, Fixed const &in);

#endif // FIXED_HPP