/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yooshima <yooshima@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/05 17:26:17 by yooshima          #+#    #+#             */
/*   Updated: 2025/02/07 19:11:47 by yooshima         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

Span::Span() {}

Span::Span(unsigned int len) : _vecLen(len), _currentLen(0), _isSorted(false) {
  _vector.reserve(_vecLen);
}

Span::Span(const Span& src) {
  _vector = src._vector;
  _vecLen = src._vecLen;
  _currentLen = src._currentLen;
  _isSorted = src._isSorted;
}

Span::~Span() {}

Span& Span::operator=(const Span& src) {
  if (this != &src) {
    _vecLen = src._vecLen;
    _currentLen = src._currentLen;
    _vector = src._vector;
    _isSorted = src._isSorted;
  }
  return *this;
}

void Span::addNumber(int nb) {
  if (_currentLen >= _vecLen) throw std::runtime_error("Vector is full");
  _vector.push_back(nb);
  _currentLen++;
  _isSorted = false;
}

void Span::fillRandNumber() {
  std::srand(time(NULL));
  try {
    while (true) addNumber(std::rand());
  } catch (std::exception& e) {
  }
}

unsigned int Span::shortestSpan() {
  if (!_currentLen) throw std::runtime_error("Vector is empty");
  if (_currentLen == 1) return 0;
  if (!_isSorted) {
    std::sort(_vector.begin(), _vector.end());
    _isSorted = true;
  }

  std::vector<int>::iterator it = _vector.begin();
  std::vector<int>::iterator itNext = it + 1;
  unsigned int shortest = UINT_MAX;
  while (itNext != _vector.end()) {
    unsigned int currentDiff = *itNext - *it;
    if (currentDiff < shortest) shortest = currentDiff;
    it++;
    itNext++;
  }
  return shortest;
}

unsigned int Span::longestSpan() {
  if (!_currentLen) throw std::runtime_error("Vector is empty");
  if (_currentLen == 1) return 0;
  if (!_isSorted) {
    std::sort(_vector.begin(), _vector.end());
    _isSorted = true;
  }
  return *(--(_vector.end())) - *(_vector.begin());
}
