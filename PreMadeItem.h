#ifndef PREMADEITEM_H
#define PREMADEITEM_H

#include <string>
#include <map>

#include <sstream>
#include <string>
#include <iostream>
#include <iomanip>
#include <sstream>
#include "IceCreamItem.h"


using namespace std;



class PreMadeItem : public IceCreamItem {
public:
	// Constructor for an IceCreamItem. All ice cream items
	// will either be "small", "medium", or "large".
  std::string n;
	PreMadeItem(std::string name, std::string size) : IceCreamItem(size)
  {
    n = name;
    std::string p = size;

    this->size = p;
    if(size=="small")
    {
      price = 4.00;
      
    }
    else if(size=="medium")
    {
      price = 6.00;
    }
    else
    {
      price = 7.50;
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
	// Returns the dollar amount of an ice cream item.
	virtual double getPrice();
  // {
  //   return price + 0.7*totalTops;
    
      
  // }
  virtual ~PreMadeItem()
  {
    int a = 0;
  }
protected:
	double price;
	std::string size;
};

#endif
