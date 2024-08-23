/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RPN.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: niromano <niromano@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/23 14:46:37 by niromano          #+#    #+#             */
/*   Updated: 2024/08/24 01:35:26 by niromano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RPN.hpp"

bool isSign(const std::string &str) {
	std::string signTab[4] = {"+", "-", "/", "*"};
	for (int i = 0; i < 4; i++) {
		if (str == signTab[i])
			return true;
	}
	return false;
}

std::stack<int> parseData(std::string data) {
	std::reverse(data.begin(), data.end());
	std::stack<int> result;
	int nb = 0, sign = 0;
	std::istringstream ss(data);
	std::string buf;
	while (std::getline(ss, buf, ' ')) {
		if (buf.size() > 1)
			throw Error();
		if (isdigit(buf[0])) {
			result.push(buf[0] - 48);
			nb++;
		}
		else if (isSign(buf)) {
			result.push(buf[0]);
			sign++;
		}
		else if (buf.empty())
			continue;
		else
			throw Error();
	}
	if (nb != sign + 1)
		throw Error();
	return result;
}

int doSign(std::stack<int> &tmp, int sign) {
	if (tmp.size() < 2)
		throw Error();
	int second = tmp.top();
	tmp.pop();
	int first = tmp.top();
	tmp.pop();
	switch (sign) {
		case '+':
			return first + second;
		case '-':
			return first - second;
		case '*':
			return first * second;
		case '/':
			if (second == 0)
				throw Error();
			return first / second;
	}
	return 0;
}

int resultOfStack(std::stack<int> stack) {
	std::stack<int> tmp;
	while (stack.size() != 1 || !tmp.empty()) {
		switch (stack.top()) {
			case '+':
				stack.pop();
				stack.push(doSign(tmp, '+'));
				break;
			case '-':
				stack.pop();
				stack.push(doSign(tmp, '-'));
				break;
			case '*':
				stack.pop();
				stack.push(doSign(tmp, '*'));
				break;
			case '/':
				stack.pop();
				stack.push(doSign(tmp, '/'));
				break;
			default:
				tmp.push(stack.top());
				stack.pop();
				break;
		}
	}
	return stack.top();
}