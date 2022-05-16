

#include <string>
#include <iostream>
#include <iomanip>
#include <sstream>

#include "IceCreamItem.h"
#include "CustomItem.h"
// CustomItem::CustomItem(std::string size) : IceCreamItem(size)
//   {
//       std::string siz = size;
//       totalTops = 0;
//       this->size = siz;
  

//       if(size=="small")
//       {
//         price = 3.00;
//       }
//       else if (size=="medium")
//       {
//         price = 5.00;
//       }
//       else
//       {
//         price = 6.50;
        
//       }
//   }

std::string CustomItem::composeItem()
  {
    //std::map<std::string,int>::iterator it;

    std::string out = "";

    out += "Custom Size: " + size;
    out+="\n";
    out+="Toppings:\n";
    stringstream stream;
	  stream << fixed << setprecision(2);
    for(auto it : toppings)
    {
      int tops = it.second;
      stream<<it.first<<": "<<tops<<" oz" <<std::endl;
      
      
        
    }
    double total = getPrice();

    stream<<"Price: $"<<total<<std::endl;

    out = out + stream.str();

    return out;
    
      
  }

  void CustomItem::addTopping(std::string topping)
  {
    //std::map<std::string,int>::iterator it;

    totalTops = totalTops + 1;


    // if (topping.at(topping.size() -1 ) != *"s")
    // {
    //     topping = topping + "s";
      
    // }





    if(toppings.find(topping)==toppings.end())
    {
      toppings[topping] = 1;
    }
    else
    {
      toppings[topping] = toppings[topping] + 1;
    }
      
  }

	// Returns the dollar amount of an ice cream item.
double CustomItem::getPrice()
  {
    return price + 0.4*totalTops;
    
      
  }
