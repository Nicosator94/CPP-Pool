/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: niromano <niromano@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/09 13:20:10 by niromano          #+#    #+#             */
/*   Updated: 2024/04/11 22:45:12 by niromano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

class Fixed {

	public :

		Fixed();
		Fixed(const int &value);
		Fixed(const float &value);
		Fixed(const Fixed &copy);
		Fixed& operator=(const Fixed &fixed);
		~Fixed();
		int		getRawBits() const;
		void	setRawBits(const int raw);
		float	toFloat() const;
		int		toInt() const;

	private :

		int					_rawbits;
		static const int	_bits = 8;
};

std::ostream& operator<<(std::ostream &out, const Fixed &fixed);