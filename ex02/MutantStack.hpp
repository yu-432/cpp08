/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yooshima <yooshima@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/06 15:05:32 by yooshima          #+#    #+#             */
/*   Updated: 2025/02/07 16:36:12 by yooshima         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MUTANTSTACK_HPP
#define MUTANTSTACK_HPP

#include <iostream>
#include <list>
#include <stack>

template<typename T>
class MutantStack : public std::stack<T> {
  public:
    MutantStack() : std::stack<T>() {};
    MutantStack(const MutantStack& src) : std::stack<T>(src) {};
    ~MutantStack() {};
    
    MutantStack& operator=(const MutantStack& src) {
      if (this != &src) {
        std::stack<T>::operator=(src);
      };
      return *this;
    };
    
    typedef typename std::stack<T>::container_type::iterator iterator;
    iterator begin() { return this->c.begin(); };
    iterator end() { return this->c.end(); };
};

#endif
