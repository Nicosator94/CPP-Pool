/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: niromano <niromano@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/28 20:30:32 by niromano          #+#    #+#             */
/*   Updated: 2024/09/25 13:33:06 by niromano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PmergeMe.hpp"

PmergeMe::PmergeMe() {}
PmergeMe::PmergeMe(const PmergeMe &copy) : _vector(copy._vector), _deque(copy._deque) {}
PmergeMe& PmergeMe::operator=(const PmergeMe &copy) {
	this->_vector = copy._vector;
	this->_deque = copy._deque;
	return *this;
}
PmergeMe::~PmergeMe() {}

void PmergeMe::initContainers(int ac, char **av) {
	std::string buf;
	long int nb;
	int i = 1;
	while (i < ac) {
		buf = av[i];
		if (buf.size() > 10)
			throw Error();
		char *endPtr;
		nb = strtol(buf.c_str(), &endPtr, 10);
		if (endPtr[0] != '\0' || nb < 0 || nb > 2147483647)
			throw Error();
		for (size_t i = 0; i < this->_vector.size(); i++)
			if (this->_vector[i] == static_cast<int>(nb))
				throw Error();
		this->_vector.push_back(static_cast<int>(nb));
		this->_deque.push_back(static_cast<int>(nb));
		i++;
	}
	std::cout << "Before : ";
	for (size_t i = 0; i < this->_vector.size(); i++)
		std::cout << (i == 0 ? "" : " ") << this->_vector[i];
	std::cout << std::endl;
}

void PmergeMe::sort() {
	clock_t start = clock();
	sortVector();
	clock_t end = clock();
	std::cout << "After : ";
	for (size_t i = 0; i < this->_vector.size(); i++)
		std::cout << (i == 0 ? "" : " ") << this->_vector[i];
	std::cout << std::endl;
	if (!isVectorSorted())
		std::cout << "\033[31mVector not sorted !\033[0m" << std::endl;
	std::cout << "Time to process a range of " << this->_vector.size();
	std::cout << " elements with std::vector : " << (static_cast<double>(end - start)) / CLOCKS_PER_SEC * 1000000;
	std::cout << " us" << std::endl;
	start = clock();
	sortDeque();
	end = clock();
	if (!isDequeSorted())
		std::cout << "\033[31mDeque not sorted !\033[0m" << std::endl;
	std::cout << "Time to process a range of " << this->_deque.size();
	std::cout << " elements with std::deque : " << (static_cast<double>(end - start)) / CLOCKS_PER_SEC * 1000000;
	std::cout << " us" << std::endl;
}

// ========================================== Vector ==========================================

void PmergeMe::sortVector() {
	std::vector<std::pair<int, int> > pairVector;
	int odd = -1;
	for (size_t i = 0; i < (this->_vector.size() % 2 == 1 ? this->_vector.size() - 1 : this->_vector.size()); i += 2)
		pairVector.push_back(std::make_pair(this->_vector[i], this->_vector[i + 1]));
	if (this->_vector.size() % 2 == 1)
		odd = this->_vector[this->_vector.size() - 1];
	this->_vector.clear();
	for (size_t i = 0; i < pairVector.size(); i++) {
		if (pairVector[i].first < pairVector[i].second) {
			int tmp = pairVector[i].first;
			pairVector[i].first = pairVector[i].second;
			pairVector[i].second = tmp;
		}
	}
	pairVector = recursiveSortVector(pairVector);
	for (size_t i = 0; i < pairVector.size(); i++)
		this->_vector.push_back(pairVector[i].first);
	if (pairVector.size() != 0) {
		this->_vector.insert(this->_vector.begin(), pairVector[0].second);
		pairVector.erase(pairVector.begin());
	}
	if (odd != -1)
		pairVector.push_back(std::pair<int, int>(-1, odd));
	std::vector<int> jacobsthalNb = jacobsthalNumberVector(pairVector.size());
	std::vector<int> remainingNbList = sortWithJacobsthalVector(pairVector, jacobsthalNb);
	sortWithBinarySearchVector(remainingNbList);
}

std::vector<std::pair<int, int> > PmergeMe::recursiveSortVector(std::vector<std::pair<int, int> > pairVector) {
	if (pairVector.size() < 2)
		return pairVector;
	std::vector<std::pair<int, int> >::iterator it = std::max_element(pairVector.begin(), pairVector.end());
	std::pair<int, int> pair = *it;
	pairVector.erase(it);
	pairVector = recursiveSortVector(pairVector);
	pairVector.push_back(pair);
	return pairVector;
}

std::vector<int> PmergeMe::jacobsthalNumberVector(size_t size) {
	std::vector<int> jacobsthalNb;
	size_t total = 0;
	while (total < size) {
		if (jacobsthalNb.size() < 2) {
			total += 2;
			jacobsthalNb.push_back(2);
		}
		else {
			size_t nb = (*(jacobsthalNb.end() - 1)) + ((*(jacobsthalNb.end() - 2)) * 2);
			total += nb;
			jacobsthalNb.push_back(nb);
		}
	}
	return jacobsthalNb;
}

std::vector<int> PmergeMe::sortWithJacobsthalVector(std::vector<std::pair<int, int> > pairVector, std::vector<int> jacobsthalNb) {
	std::vector<int> remainingNbList;
	int total = 0;
	for (size_t i = 0; i < jacobsthalNb.size(); i++) {
		std::vector<int> tmp;
		for (size_t j = total; static_cast<int>(j) < jacobsthalNb[i] + total; j++) {
			tmp.push_back(pairVector[j].second);
			if (j + 1 == pairVector.size())
				break;
		}
		total += tmp.size();
		std::reverse(tmp.begin(), tmp.end());
		remainingNbList.insert(remainingNbList.end(), tmp.begin(), tmp.end());
	}
	return remainingNbList;
}

void PmergeMe::sortWithBinarySearchVector(std::vector<int> remainingNbList) {
	for (size_t i = 0; i < remainingNbList.size(); i++)
		this->_vector.insert(binarySearchVector(remainingNbList[i], this->_vector.begin(), this->_vector.end()), remainingNbList[i]);
}

itVec PmergeMe::binarySearchVector(int nb, itVec start, itVec end) {
	itVec it = start + (end - start) / 2;
	if (nb > *it) {
		if (it + 1 == end)
			return it + 1;
		return binarySearchVector(nb, it + 1, end);
	}
	else {
		if (it == end)
			return it;
		return binarySearchVector(nb, start, it);
	}
}

bool PmergeMe::isVectorSorted() {
	for (size_t i = 1; i < this->_vector.size(); i++) {
		if (this->_vector[i - 1] > this->_vector[i])
			return false;
	}
	return true;
}

// ========================================== Deque ==========================================

void PmergeMe::sortDeque() {
	std::deque<std::pair<int, int> > pairDeque;
	int odd = -1;
	for (size_t i = 0; i < (this->_deque.size() % 2 == 1 ? this->_deque.size() - 1 : this->_deque.size()); i += 2)
		pairDeque.push_back(std::make_pair(this->_deque[i], this->_deque[i + 1]));
	if (this->_deque.size() % 2 == 1)
		odd = this->_deque[this->_deque.size() - 1];
	this->_deque.clear();
	for (size_t i = 0; i < pairDeque.size(); i++) {
		if (pairDeque[i].first < pairDeque[i].second) {
			int tmp = pairDeque[i].first;
			pairDeque[i].first = pairDeque[i].second;
			pairDeque[i].second = tmp;
		}
	}
	pairDeque = recursiveSortDeque(pairDeque);
	for (size_t i = 0; i < pairDeque.size(); i++)
		this->_deque.push_back(pairDeque[i].first);
	if (pairDeque.size() != 0) {
		this->_deque.insert(this->_deque.begin(), pairDeque[0].second);
		pairDeque.erase(pairDeque.begin());
	}
	if (odd != -1)
		pairDeque.push_back(std::pair<int, int>(-1, odd));
	std::deque<int> jacobsthalNb = jacobsthalNumberDeque(pairDeque.size());
	std::deque<int> remainingNbList = sortWithJacobsthalDeque(pairDeque, jacobsthalNb);
	sortWithBinarySearchDeque(remainingNbList);
}

std::deque<std::pair<int, int> > PmergeMe::recursiveSortDeque(std::deque<std::pair<int, int> > pairDeque) {
	if (pairDeque.size() < 2)
		return pairDeque;
	std::deque<std::pair<int, int> >::iterator it = std::max_element(pairDeque.begin(), pairDeque.end());
	std::pair<int, int> pair = *it;
	pairDeque.erase(it);
	pairDeque = recursiveSortDeque(pairDeque);
	pairDeque.push_back(pair);
	return pairDeque;
}

std::deque<int> PmergeMe::jacobsthalNumberDeque(size_t size) {
	std::deque<int> jacobsthalNb;
	size_t total = 0;
	while (total < size) {
		if (jacobsthalNb.size() < 2) {
			total += 2;
			jacobsthalNb.push_back(2);
		}
		else {
			size_t nb = (*(jacobsthalNb.end() - 1)) + ((*(jacobsthalNb.end() - 2)) * 2);
			total += nb;
			jacobsthalNb.push_back(nb);
		}
	}
	return jacobsthalNb;
}

std::deque<int> PmergeMe::sortWithJacobsthalDeque(std::deque<std::pair<int, int> > pairDeque, std::deque<int> jacobsthalNb) {
	std::deque<int> remainingNbList;
	int total = 0;
	for (size_t i = 0; i < jacobsthalNb.size(); i++) {
		std::deque<int> tmp;
		for (size_t j = total; static_cast<int>(j) < jacobsthalNb[i] + total; j++) {
			tmp.push_back(pairDeque[j].second);
			if (j + 1 == pairDeque.size())
				break;
		}
		total += tmp.size();
		std::reverse(tmp.begin(), tmp.end());
		remainingNbList.insert(remainingNbList.end(), tmp.begin(), tmp.end());
	}
	return remainingNbList;
}

void PmergeMe::sortWithBinarySearchDeque(std::deque<int> remainingNbList) {
	for (size_t i = 0; i < remainingNbList.size(); i++)
		this->_deque.insert(binarySearchDeque(remainingNbList[i], this->_deque.begin(), this->_deque.end()), remainingNbList[i]);
}

itDeq PmergeMe::binarySearchDeque(int nb, itDeq start, itDeq end) {
	itDeq it = start + (end - start) / 2;
	if (nb > *it) {
		if (it + 1 == end)
			return it + 1;
		return binarySearchDeque(nb, it + 1, end);
	}
	else {
		if (it == end)
			return it;
		return binarySearchDeque(nb, start, it);
	}
}

bool PmergeMe::isDequeSorted() {
	for (size_t i = 1; i < this->_deque.size(); i++) {
		if (this->_deque[i - 1] > this->_deque[i])
			return false;
	}
	return true;
}