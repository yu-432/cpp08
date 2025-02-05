/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yooshima <yooshima@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/05 17:26:15 by yooshima          #+#    #+#             */
/*   Updated: 2025/02/05 17:46:45 by yooshima         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN_HPP
#define SPAN_HPP

#include <cstdlib>

class Span {
  public:
    Span(unsigned int len);
    Span(const Span& src);
    ~Span();
    
    Span& operator=(const Span& src);
    
    void addNumber(int nb);
    void fillRandNumber();
    unsigned int shortestSpan() const;
    unsigned int longestSpan() const;
    
  private:
    Span();//使用して欲しくない
    unsigned int _spanLen;
    unsigned int _crrLen;  
};

#endif
