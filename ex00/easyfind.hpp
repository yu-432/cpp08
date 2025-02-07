/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yooshima <yooshima@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/05 10:58:18 by yooshima          #+#    #+#             */
/*   Updated: 2025/02/07 17:23:43 by yooshima         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EASYFIND_HPP
#define EASYFIND_HPP

#include <algorithm>
#include <iostream>
#include <list>
#include <vector>

template <class T>
typename T::iterator easyfind(T& container, int nb) {
  typename T::iterator temp = std::find(container.begin(), container.end(), nb);
  if (temp == container.end()) throw std::runtime_error("Number not found");
  return temp;
}

#endif
