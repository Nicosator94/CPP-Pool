/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: niromano <niromano@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/04 16:19:13 by niromano          #+#    #+#             */
/*   Updated: 2024/06/12 15:10:23 by niromano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include <list>
#include "MutantStack.hpp"

int main() { {
	std::cout << "Test with MutantStack :" << std::endl;
	MutantStack<std::string> mstack;
	mstack.push("5");
	mstack.push("17");
	std::cout << mstack.top() << std::endl;
	mstack.pop();
	std::cout << mstack.size() << std::endl;
	mstack.push("3");
	mstack.push("5");
	mstack.push("737");
	mstack.push("0");
	MutantStack<std::string>::iterator it = mstack.begin();
	MutantStack<std::string>::iterator ite = mstack.end();
	++it;
	--it;
	while (it != ite) {
		std::cout << *it << std::endl;
		++it;
	}
	MutantStack<std::string> s(mstack);
	} std::cout << std::endl; {
	std::cout << "Test with List :" << std::endl;
	std::list<std::string> mstack;
	mstack.push_back("5");
	mstack.push_back("17");
	std::cout << mstack.back() << std::endl;
	mstack.pop_back();
	std::cout << mstack.size() << std::endl;
	mstack.push_back("3");
	mstack.push_back("5");
	mstack.push_back("737");
	mstack.push_back("0");
	std::list<std::string>::iterator it = mstack.begin();
	std::list<std::string>::iterator ite = mstack.end();
	++it;
	--it;
	while (it != ite) {
		std::cout << *it << std::endl;
		++it;
	}
	std::list<std::string> s(mstack);
	}
	return 0;
}