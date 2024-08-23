/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RPN.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: niromano <niromano@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/23 14:46:50 by niromano          #+#    #+#             */
/*   Updated: 2024/08/23 23:54:39 by niromano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <sstream>
#include <string>
#include <stack>
#include <cstdlib>
#include <algorithm>

std::stack<int> parseData(std::string data);
int resultOfStack(std::stack<int> stack);

class Error : public std::exception {const char* what() const throw() {return "Error";}};