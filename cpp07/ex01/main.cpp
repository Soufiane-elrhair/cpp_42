/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: selrhair <selrhair@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/19 17:52:03 by selrhair          #+#    #+#             */
/*   Updated: 2023/12/24 15:44:00 by selrhair         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "iter.hpp"
#include <iostream>

int main()
{
  int tab[] = {0, 1, 2, 3, 4};

  iter<int>(tab, 5, show<int>);
  iter<int>(tab, 5, show<int const>);
  return 0;
}
