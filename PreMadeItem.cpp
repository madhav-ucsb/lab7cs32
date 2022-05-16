

#include <string>
#include <iostream>
#include <iomanip>
#include <sstream>

#include "IceCreamItem.h"
#include "PreMadeItem.h"



double PreMadeItem::getPrice()
{
  return price;
}

std::string PreMadeItem::composeItem()
{
  std::string out = "";
  out = out + "Pre-made Size: " + size + "\n";
  out = out + "Pre-made Item: " + n +"\n";
  stringstream stream;
	stream << fixed << setprecision(2);


  stream<<"Price: $"<<price<<std::endl;

  out = out + stream.str();
  return out;
}