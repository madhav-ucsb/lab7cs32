#ifndef CUSTOMITEM_H
#define CUSTOMITEM_H

#include <string>
#include <map>

#include <sstream>
#include <string>
#include <iostream>
#include <iomanip>
#include <sstream>
#include "IceCreamItem.h"


using namespace std;



class CustomItem : public IceCreamItem {
public:
	// Constructor for an IceCreamItem. All ice cream items
	// will either be "small", "medium", or "large".

  std::map<std::string , int> toppings;

  int totalTops;
  
	CustomItem(std::string size) : IceCreamItem(size)
  {
      std::string siz = size;
      totalTops = 0;
      this->size = siz;
  

      if(size=="small")
      {
        price = 3.00;
      }
      else if (size=="medium")
      {
        price = 5.00;
      }
      else
      {
        price = 6.50;
        
      }
  }

	// A virtual method that composes a string with the details
	// of an IceCreamItem. See the lab writeup and test files
	// for examples of the format for composeItem.
	virtual std::string composeItem();
  // {
  //   //std::map<std::string,int>::iterator it;

  //   std::string out = "";

  //   out += "Custom Size: " + size;
  //   out+="\n";
  //   out+="Toppings:\n";
  //   stringstream stream;
	 //  stream << fixed << setprecision(2);
  //   for(auto it : toppings)
  //   {
  //     int tops = it.second;
  //     stream<<it.first<<": "<<tops<<std::endl;
      
      
        
  //   }
  //   double total = getPrice();

  //   stream<<"Price: "<<total<<std::endl;

  //   out = out + stream.str();

  //   return out;
    
      
  // }

  void addTopping(std::string topping);
  // {
  //   //std::map<std::string,int>::iterator it;

  //   totalTops = totalTops + 1;

  //   topping = topping + "s";



  //   if(toppings.find(topping)==toppings.end())
  //   {
  //     toppings[topping] = 1;
  //   }
  //   else
  //   {
  //     toppings[topping] = toppings[topping] + 1;
  //   }
      
  // }

	// Returns the dollar amount of an ice cream item.
	virtual double getPrice();
  // {
  //   return price + 0.7*totalTops;
    
      
  // }
  virtual ~CustomItem()
  {
    toppings.clear();
  }
protected:
	double price;
	std::string size;
};

#endif
