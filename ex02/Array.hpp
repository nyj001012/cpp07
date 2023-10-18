/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yena <yena@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/09 19:13:07 by yena              #+#    #+#             */
/*   Updated: 2023/10/18 18:10:05 by yena             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//
// Created by 나예진 on 2023/10/09.
//

#ifndef EX02__ARRAY_HPP_
#define EX02__ARRAY_HPP_

#include <iostream>

template <typename T>
class Array {
 public:
  Array();
  Array(unsigned int n);
  Array(const Array<T> &other);
  Array<T> &operator=(const Array<T> &other);
  ~Array();
  T &operator[](unsigned int idx) const;
  unsigned int size() const;

 private:
  T *_data;
  unsigned int _size;

};

template <typename T>
Array<T>::Array() {
  _data = new T[0];
  _size = 0;
}

template <typename T>
Array<T>::Array(unsigned int n) {
  _data = new T[n];
  _size = n;
}

template <typename T>
Array<T>::Array(const Array<T> &other) {
  _data = new T[other._size];
  _size = other._size;
  for (unsigned i = 0; i < _size; i++) {
    _data[i] = other._data[i];
  }
}

template <typename T>
Array<T> &Array<T>::operator=(const Array<T> &other) {
  if (this != &other) {
    delete[] _data;
    _data = new T[other._size];
    _size = other._size;
    for (unsigned int i = 0; i < _size; i++) {
      _data[i] = other._data[i];
    }
  }
  return *this;
}

template <typename T>
Array<T>::~Array() {
  delete[] _data;
}

template <typename T>
T &Array<T>::operator[](unsigned int idx) const {
  if (idx >= _size) {
    throw std::exception();
  }
  return _data[idx];
}

template <typename T>
unsigned int Array<T>::size() const {
  return _size;
}

template <typename T>
std::ostream &operator<<(std::ostream &os, const Array<T> &arr) {
  os << "[";
  for (unsigned int i = 0; i < arr.size(); i++) {
    os << arr[i];
    if (i != arr.size() - 1) {
      os << ", ";
    }
  }
  os << "]";
  return os;
}

#endif  // EX02__ARRAY_HPP_
