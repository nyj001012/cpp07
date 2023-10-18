/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yena <yena@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/09 18:52:15 by yena              #+#    #+#             */
/*   Updated: 2023/10/18 18:01:28 by yena             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//
// Created by 나예진 on 2023/10/09.
//

#ifndef EX01__ITER_HPP_
#define EX01__ITER_HPP_

#include <iostream>

template<typename T>
void print(T const &x) {
  std::cout << x << std::endl;
}

template<typename T>
void iter(T *arr, int len, void (*func)(T const &)) {
  for (int i = 0; i < len; i++) {
    func(arr[i]);
  }
}

#endif //EX01__ITER_HPP_
