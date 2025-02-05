/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yooshima <yooshima@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/05 10:58:19 by yooshima          #+#    #+#             */
/*   Updated: 2025/02/05 17:24:31 by yooshima         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "easyfind.hpp"

int main(void) {
  std::vector<int> v1;
  for (int i = 0; i < 2; i++) {
    for (int j = 0; j < 10; j++) {
      v1.push_back(j);
    }
  }
  std::cout << "first 3 address: " << &v1[3] << std::endl;
  std::cout << "easyfind address: " << &(*easyfind(v1, 3)) << std::endl;

  std::list<int> l1;
  for (int i = 0; i < 2; i++) {
    for (int j = 0; j < 10; j++) {
      l1.push_back(j);
    }
  }  
  int k = 0;
  for (std::list<int>::iterator it = l1.begin(); it != l1.end(); ++it) {
    std::cout << k << ": " << &(*it) << std::endl;
    ++k;
  }
  std::cout << "easyfind address 7: " << &(*easyfind(l1, 7)) << std::endl;

  try {
    std::cout << "not found easyfind: " << &(*easyfind(l1, 10)) << std::endl;
  } catch (std::exception& e) {
    std::cout << e.what() << std::endl;
  }
}
