/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yena <yena@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/09 18:49:31 by yena              #+#    #+#             */
/*   Updated: 2023/10/18 13:35:25 by yena             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "font.hpp"
#include "iter.hpp"

int main() {
  std::srand(std::time(NULL));
  int iArr[5] = {42, 24, 10, 12, 3};
  std::string strArr[5] = {"\033[33mP\033[0mizza", "\033[33mA\033[0mpple",
                           "\033[33mS\033[0mtrawberry",
                           "\033[33mS\033[0mnowman"};
  double dArr[4] = {3.14, 1.414, 2.718, 1.618};

  std::cout << F_GREEN << "------------- ITER INT -------------" << FB_DEFAULT
            << std::endl;
  ::iter(iArr, 5, print);
  std::cout << std::endl;

  std::cout << F_GREEN << "------------ ITER STRING -----------" << FB_DEFAULT
            << std::endl;
  ::iter(strArr, 5, print);
  std::cout << std::endl;

  std::cout << F_GREEN << "------------ ITER DOUBLE -----------" << FB_DEFAULT
            << std::endl;
  ::iter(dArr, 4, print);

  return 0;
}
