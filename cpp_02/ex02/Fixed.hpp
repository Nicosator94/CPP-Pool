/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: niromano <niromano@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/09 13:20:10 by niromano          #+#    #+#             */
/*   Updated: 2024/04/12 16:39:33 by niromano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

class Fixed {

	public :

		Fixed();
		Fixed(const int &value);
		Fixed(const float &value);
		Fixed(const Fixed &copy);
		Fixed&	operator=(const Fixed &fixed);
		bool	operator>(const Fixed &fixed) const;
		bool	operator<(const Fixed &fixed) const;
		bool	operator>=(const Fixed &fixed) const;
		bool	operator<=(const Fixed &fixed) const;
		bool	operator!=(const Fixed &fixed) const;
		bool	operator==(const Fixed &fixed) const;
		Fixed	operator+(const Fixed &fixed);
		Fixed	operator-(const Fixed &fixed);
		Fixed	operator*(const Fixed &fixed);
		Fixed	operator/(const Fixed &fixed);
		Fixed	operator++();
		Fixed	operator--();
		Fixed	operator++(int);
		Fixed	operator--(int);
		~Fixed();
		int		getRawBits() const;
		void	setRawBits(const int raw);
		float	toFloat() const;
		int		toInt() const;
		static Fixed&	min(Fixed &a, Fixed &b);
		static Fixed&	max(Fixed &a, Fixed &b);
		static const Fixed&	min(const Fixed &a, const Fixed &b);
		static const Fixed&	max(const Fixed &a, const Fixed &b);

	private :

		int					_rawbits;
		static const int	_bits = 8;
};

std::ostream& operator<<(std::ostream &out, const Fixed &fixed);