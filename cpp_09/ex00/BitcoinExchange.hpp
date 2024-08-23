/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: niromano <niromano@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/12 15:14:28 by niromano          #+#    #+#             */
/*   Updated: 2024/08/23 14:35:44 by niromano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <fstream>
#include <sstream>
#include <map>
#include <cstdlib>
#include <ctime>

std::map<int, float> getData(const std::string &file);
std::string bitcoinExchange(const std::string &line, std::map<int, float> data);

class Error : public std::exception {

	public:

		Error(const std::string &errorStr) : _errorStr(errorStr) {}
		virtual const char* what() const throw() {return this->_errorStr.c_str();}
		virtual ~Error() throw(){}

	private:

		std::string _errorStr;
};