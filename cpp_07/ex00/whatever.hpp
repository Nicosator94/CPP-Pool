/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   whatever.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: niromano <niromano@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/04 16:19:21 by niromano          #+#    #+#             */
/*   Updated: 2024/06/04 16:28:19 by niromano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

template <typename T> void swap(T a, T b) {
	T tmp = a;
	a = b;
	b = tmp;
}

template <typename T> T min(T a, T b) {
	if (a < b)
		return a;
	else
		return b;
}

template <typename T> T max(T a, T b) {
	if (a > b)
		return a;
	else
		return b;
}