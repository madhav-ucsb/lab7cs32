#include <string>
#include <iostream>
#include <iomanip>
#include <sstream>

#include "IceCreamItem.h"



IceCreamItem::IceCreamItem(std::string size)
{
  std::string p = size;

  this->size = p;
}

std::string IceCreamItem::composeItem()
{
  return "";
}
double IceCreamItem::getPrice()
{
  return 0.0;
}