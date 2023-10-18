/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yena <yena@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/09 19:12:51 by yena              #+#    #+#             */
/*   Updated: 2023/10/18 13:25:24 by yena             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Array.hpp"

int main() {
  Array<int> emptyArr;
  Array<int> iArr(5);
  Array<std::string> sArr(3);

  std::cout << "-------------- EMPTY ARRAY (INT) --------------" << std::endl;
  std::cout << "size: " << (&emptyArr)->size() << std::endl;
  std::cout << "data: " << emptyArr << std::endl;
  std::cout << std::endl;

  std::cout << "----------------- ARRAY (INT) -----------------" << std::endl;
  std::cout << "size: " << (&iArr)->size() << std::endl;
  std::cout << "data: " << iArr << std::endl;
  std::cout << "[INFO]: Change data[0] to 100" << std::endl;
  iArr[0] = 100;
  std::cout << "data: " << iArr << std::endl;
  std::cout << "[INFO]: Make exception" << std::endl;
  try {
    sArr[4] = "exception";
  } catch (std::exception &e) {
    std::cout << e.what() << std::endl;
  }
  std::cout << std::endl;

  std::cout << "---------------- ARRAY (STRING) ---------------" << std::endl;
  std::cout << "size: " << (&sArr)->size() << std::endl;
  std::cout << "data: " << sArr << std::endl;
  std::cout << "[INFO]: Change data[2] to \"yena\"" << std::endl;
  sArr[2] = "yena";
  std::cout << "data: " << sArr << std::endl;
  std::cout << std::endl;

  std::cout << "----------------- COPY ARRAY ------------------" << std::endl;
  Array<int> copyArr(iArr);
  std::cout << "origin:\tsize: " << (&copyArr)->size() << std::endl;
  std::cout << "origin:\tdata: " << copyArr << std::endl;
  std::cout << "copy:\tsize: " << (&iArr)->size() << std::endl;
  std::cout << "copy:\tdata: " << iArr << std::endl;
  std::cout << std::endl;

  std::cout << "-------------- ASSIGNMENT ARRAY ---------------" << std::endl;
  Array<std::string> assignArr;
  assignArr = sArr;
  std::cout << "origin:\tsize: " << (&sArr)->size() << std::endl;
  std::cout << "origin:\tdata: " << sArr << std::endl;
  std::cout << "assign:\tsize: " << (&assignArr)->size() << std::endl;
  std::cout << "assign:\tdata: " << assignArr << std::endl;
  return 0;
}
