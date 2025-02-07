/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yooshima <yooshima@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/05 17:26:15 by yooshima          #+#    #+#             */
/*   Updated: 2025/02/07 17:18:12 by yooshima         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN_HPP
#define SPAN_HPP

#include <algorithm>
#include <climits>
#include <cstdlib>
#include <exception>
#include <iostream>
#include <vector>

class Span {
 public:
  Span(unsigned int len);
  Span(const Span& src);
  ~Span();

  Span& operator=(const Span& src);

  void addNumber(int nb);
  void fillRandNumber();
  unsigned int shortestSpan();
  unsigned int longestSpan();
  // template <typename InputItretor>
  // void addNumber(InputItretor first, InputItretor last){
  //   for (InputItretor it = first; first != last; ++it)
  //   addNuber(*it);
  // }

 private:
  Span();  // 使用して欲しくない
  std::vector<int> _vector;
  unsigned int _vecLen;
  unsigned int _currentLen;
  bool _isSorted;
};

#endif
