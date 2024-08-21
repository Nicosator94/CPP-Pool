/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: niromano <niromano@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/12 15:14:28 by niromano          #+#    #+#             */
/*   Updated: 2024/08/21 16:09:18 by niromano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <fstream>
#include <map>
#include <cstdlib>
#include <ctime>

std::map<std::string, float> getData();

class Error : public std::exception {

	public:

		Error(const std::string &errorStr) : _errorStr(errorStr) {}
		virtual const char* what() const throw() {return this->_errorStr.c_str();}
		virtual ~Error() throw(){}

	private:

		std::string _errorStr;
};