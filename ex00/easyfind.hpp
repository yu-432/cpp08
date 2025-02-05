/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yooshima <yooshima@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/05 10:58:18 by yooshima          #+#    #+#             */
/*   Updated: 2025/02/05 17:24:12 by yooshima         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EASYFIND_HPP
#define EASYFIND_HPP

#include <vector>
#include <list>
#include <algorithm>
#include <iostream>

template<class T>
typename T::iterator easyfind(T& container, int nb) {
  typename T::iterator temp = std::find(container.begin(), container.end(), nb);
  if (temp == container.end()) throw std::runtime_error("Number not found");
  return temp;
}

#endif
