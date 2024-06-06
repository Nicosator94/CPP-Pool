/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: niromano <niromano@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/04 16:19:13 by niromano          #+#    #+#             */
/*   Updated: 2024/06/06 15:14:52 by niromano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <vector>
#include <stack>
#include "easyfind.hpp"

int main() {
	std::stack<int> f;
	f.push(15);
	f.push(15);
	easyfind(f, 15);
	return 0;
}