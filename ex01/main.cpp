/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yena <yena@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/09 18:49:31 by yena              #+#    #+#             */
/*   Updated: 2023/10/09 19:09:44 by yena             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "iter.hpp"

int main() {
  std::srand(std::time(NULL));
  int iArr[5] = { 42, 24, 10, 12, 3 };
  std::string strArr[5] = {
	  "\033[32mP\033[0mizza",
	  "\033[32mA\033[0mpple",
	  "\033[32mS\033[0mtrawberry",
	  "\033[32mS\033[0mnowman"
  };
  double dArr[4] = { 3.14, 1.414, 2.718, 1.618 };

  std::cout << "-------------------------- ITER INT --------------------------" << std::endl;
  ::iter(iArr, 5, print);
  std::cout << std::endl;
  std::cout << "------------------------- ITER STRING -------------------------" << std::endl;
  ::iter(strArr, 5, print);
  std::cout << "------------------------- ITER DOUBLE -------------------------" << std::endl;
  ::iter(dArr, 4, print);

  return 0;
}
