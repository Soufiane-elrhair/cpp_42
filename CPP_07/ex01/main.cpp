#include "iter.hpp"
#include <iostream>

int main()
{
  int tab[] = {0, 1, 2, 3, 4};

  iter<int>(tab, 5, show<int>);
  iter<int>(tab, 5, show<const int>);
  return 0;
}
