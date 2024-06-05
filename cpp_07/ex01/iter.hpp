/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: niromano <niromano@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/05 12:40:52 by niromano          #+#    #+#             */
/*   Updated: 2024/06/05 13:16:43 by niromano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

template <typename T, typename Func> void iter(T *array, unsigned int size, Func f(T&)) {
	for (unsigned int i = 0; i < size; i++)
		f(array[i]);
}