/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: niromano <niromano@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/09 13:20:10 by niromano          #+#    #+#             */
/*   Updated: 2024/04/09 14:02:21 by niromano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

class Fixed {

	public :

		Fixed();
		Fixed(const Fixed &copy);
		Fixed& operator=(const Fixed &fixed);
		~Fixed();
		int		getRawBits() const;
		void	setRawBits(const int raw);

	private :

		int					_value;
		static const int	_bits = 8;
};