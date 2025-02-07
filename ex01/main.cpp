/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yooshima <yooshima@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/05 17:25:39 by yooshima          #+#    #+#             */
/*   Updated: 2025/02/07 19:10:12 by yooshima         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

int main() {
  Span sp1 = Span(5);
  try {
    sp1.addNumber(6);
    sp1.addNumber(3);
    sp1.addNumber(17);
    sp1.addNumber(9);
    sp1.addNumber(11);
    // sp1.addNumber(12);
  } catch (std::exception& e) {
    std::cout << e.what() << std::endl;
  }
  std::cout << sp1.shortestSpan() << std::endl;
  std::cout << sp1.longestSpan() << std::endl;

  Span sp2 = Span(10);
  sp2.fillRandNumber();
  std::cout << sp2.shortestSpan() << std::endl;
  std::cout << sp2.longestSpan() << std::endl;
  return 0;
}